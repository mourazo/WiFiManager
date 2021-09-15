#include <WiFiManager.h> // https://github.com/mourazo/WifiManager


char entUser[40];
char entPass[40];
WiFiManagerParameter enterprise_user("user", "USUARIO", entUser, 40); //parameter for the enterprise user
WiFiManagerParameter enterprise_pass("pass", "CONTRASEÑA", entPass, 40); //parameter for the enterprise pass



void setup() {
    WiFi.mode(WIFI_STA); // explicitly set mode, esp defaults to STA+AP

    // put your setup code here, to run once:
    Serial.begin(115200);
    
    // WiFi.mode(WiFi_STA); // it is a good practice to make sure your code sets wifi mode how you want it.

    //WiFiManager, Local intialization. Once its business is done, there is no need to keep it around
    WiFiManager wm;

    //reset settings - wipe credentials for testing
    //wm.resetSettings();

    // Automatically connect using saved credentials,
    // if connection fails, it starts an access point with the specified name ( "AutoConnectAP"),
    // if empty will auto generate SSID, if password is blank it will be anonymous AP (wm.autoConnect())
    // then goes into a blocking loop awaiting configuration and will return success result

    bool res;
    // res = wm.autoConnect(); // auto generated AP name from chipid
    // res = wm.autoConnect("AutoConnectAP"); // anonymous ap
    res = wm.autoConnect("AutoConnectAP","password"); // password protected ap
    
    wm.setClass("invert"); // dark theme
    
    wm.setShowPasswordField(false); //false for show and false for hide

     wm.addParameter(&enterprise_user); //parameter for add the enterprise user
     wm.addParameter(&enterprise_pass); //parameter for add the enterprise pass
    
    if(!res) {
        Serial.println("Failed to connect");
        // ESP.restart();
    } 
    else {
        //if you get here you have connected to the WiFi    
        Serial.println("connected...yeey :)");
        const char* enterprise_user_get= enterprise_user.getValue();
        const char* enterprise_pass_get= enterprise_pass.getValue();
        Serial.print("ENTERPRISE USER: ");
        Serial.println(enterprise_user_get);
        Serial.print("ENTERPRISE PASS: ");
        Serial.println(enterprise_pass_get);
        
    }

}

void loop(){
  
}
