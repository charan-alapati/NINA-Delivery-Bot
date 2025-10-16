/* gps_tracking_esp8266.ino
   Read GPS (NMEA) and serve a small web page (Mapbox) + JSON endpoint.
   Based on "Live Traking Using Gps" in the report. :contentReference[oaicite:10]{index=10} :contentReference[oaicite:11]{index=11}
*/

#include <SoftwareSerial.h>
#include <NMEAGPS.h>
#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

NMEAGPS gps;
gps_fix fix;

SoftwareSerial gpsSerial(D2, D1); // RX, TX (adjust pins based on board)

ESP8266WebServer server(80);

const char* ssid = "Charan";       // replace with your SSID
const char* password = "77777777"; // replace with your WiFi password

void setup() {
  Serial.begin(115200);
  gpsSerial.begin(9600);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println();
  Serial.print("Connected to WiFi, IP: ");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);         // serve map page
  server.on("/location", sendLocation); // serve JSON
  server.begin();
}

void loop() {
  server.handleClient();

  // read GPS if available
  while (gps.available(gpsSerial)) {
    fix = gps.read();
  }
}

// Serve Mapbox-based HTML (replace MAPBOX_TOKEN placeholder)
void handleRoot() {
  String html = "<!DOCTYPE html><html><head><meta name='viewport' content='width=device-width, initial-scale=1.0'>";
  html += "<title>GPS Location</title>";
  html += "<script src='https://api.mapbox.com/mapbox-gl-js/v2.15.0/mapbox-gl.js'></script>";
  html += "<link href='https://api.mapbox.com/mapbox-gl-js/v2.15.0/mapbox-gl.css' rel='stylesheet' />";
  html += "<style>body, html {margin:0;padding:0;height:100%;width:100%;}#map{width:100%;height:100%;}</style></head><body>";
  html += "<div id='map'></div>";
  html += "<script>mapboxgl.accessToken = 'MAPBOX_TOKEN'; var map = new mapboxgl.Map({container:'map',style:'mapbox://styles/mapbox/streets-v11',zoom:15});";
  html += "var marker = new mapboxgl.Marker().setLngLat([0,0]).addTo(map);";
  html += "function updateMap(){ fetch('/location').then(r=>r.json()).then(data=>{ if(data.lat && data.lon){ marker.setLngLat([data.lon,data.lat]); map.setCenter([data.lon,data.lat]); } }); }";
  html += "setInterval(updateMap,5000);</script></body></html>";
  server.send(200, "text/html", html);
}

void sendLocation() {
  String json = "{";
  json += "\"lat\":" + String(fix.latitude(), 6) + ",";
  json += "\"lon\":" + String(fix.longitude(), 6);
  json += "}";
  server.send(200, "application/json", json);

  Serial.print("Latitude: "); Serial.println(fix.latitude(), 6);
  Serial.print("Longitude: "); Serial.println(fix.longitude(), 6);
}
