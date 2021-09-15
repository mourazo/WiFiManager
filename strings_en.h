/**
 * strings_en.h
 * engligh strings for
 * WiFiManager, a library for the ESP8266/Arduino platform
 * for configuration of WiFi credentials using a Captive Portal
 *
 * @author Creator tzapu
 * @author tablatronix
 * @version 0.0.0
 * @license MIT
 */

#ifndef _WM_STRINGS_H_
#define _WM_STRINGS_H_

#ifndef WIFI_MANAGER_OVERRIDE_STRINGS
 // !!! ABOVE WILL NOT WORK if you define in your sketch, must be build flag, if anyone one knows how to order includes to be able to do this it would be neat.. I have seen it done..

const char HTTP_HEAD_START[]       PROGMEM = "<!DOCTYPE html>"
"<html lang='en'><head>"
"<meta name='format-detection' content='telephone=no'>"
"<meta charset='UTF-8'>"
"<meta  name='viewport' content='width=device-width,initial-scale=1,user-scalable=no'/>"
"<title>{v}</title>";

const char HTTP_SCRIPT[]           PROGMEM = "<script>function c(l){"
"document.getElementById('s').value=l.innerText||l.textContent;"
"p = l.nextElementSibling.classList.contains('l');"
"document.getElementById('p').disabled = !p;"
"if(p)document.getElementById('p').focus();}</script>"; // @todo add button states, disable on click , show ack , spinner etc

const char HTTP_HEAD_END[]         PROGMEM = "</head><body class='{c}'><div class='wrap'>"; // {c} = _bodyclass
// example of embedded logo, base64 encoded inline, No styling here
//const char HTTP_ROOT_MAIN[]        PROGMEM = "<img title=' alt=' src='data:image/png;base64,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' /><h1>{v}</h1>";
//const char HTTP_ROOT_MAIN[]        PROGMEM = "<h1>{t}</h1><h3>{v}</h3>";
const char * const HTTP_PORTAL_MENU[] PROGMEM = {
"<form action='/wifi'    method='get'><button>Configurar WiFi</button></form><br/>\n", // MENU_WIFI
"<form action='/0wifi'   method='get'><button>Configurar WiFi (Oculta)</button></form><br/>\n", // MENU_WIFINOSCAN
"<form action='/info'    method='get'><button>Info</button></form><br/>\n", // MENU_INFO
"<form action='/param'   method='get'><button>Configuración</button></form><br/>\n",//MENU_PARAM
"<form action='/close'   method='get'><button>Cerrar</button></form><br/>\n", // MENU_CLOSE
"<form action='/restart' method='get'><button>Reiniciar</button></form><br/>\n",// MENU_RESTART
"<form action='/exit'    method='get'><button>Salir</button></form><br/>\n",  // MENU_EXIT
"<form action='/erase'   method='get'><button class='D'>Borrar</button></form><br/>\n", // MENU_ERASE
"<form action='/update'  method='get'><button>Actualizar</button></form><br/>\n",// MENU_UPDATE
"<hr><br/>" // MENU_SEP
};

// const char HTTP_PORTAL_OPTIONS[]   PROGMEM = strcat(HTTP_PORTAL_MENU[0] , HTTP_PORTAL_MENU[3] , HTTP_PORTAL_MENU[7]);
const char HTTP_PORTAL_OPTIONS[]   PROGMEM = "";
const char HTTP_ITEM_QI[]          PROGMEM = "<div role='img' aria-label='{r}%' title='{r}%' class='q q-{q} {i} {h}'></div>"; // rssi icons
const char HTTP_ITEM_QP[]          PROGMEM = "<div class='q {h}'>{r}%</div>"; // rssi percentage {h} = hidden showperc pref
const char HTTP_ITEM[]             PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a>{qi}{qp}</div>"; // {q} = HTTP_ITEM_QI, {r} = HTTP_ITEM_QP
// const char HTTP_ITEM[]            PROGMEM = "<div><a href='#p' onclick='c(this)'>{v}</a> {R} {r}% {q} {e}</div>"; // test all tokens

const char HTTP_FORM_START[]       PROGMEM = "<form method='POST' action='{v}'>";
const char HTTP_FORM_WIFI[]        PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/><label for='p'>Password</label><input id='p' name='p' maxlength='64' type='password' placeholder='{p}'>";
const char HTTP_FORM_WIFI_NO_PSW[]        PROGMEM = "<label for='s'>SSID</label><input id='s' name='s' maxlength='32' autocorrect='off' autocapitalize='none' placeholder='{v}'><br/>";
const char HTTP_FORM_WIFI_END[]    PROGMEM = "";
const char HTTP_FORM_STATIC_HEAD[] PROGMEM = "<hr><br/>";
const char HTTP_FORM_END[]         PROGMEM = "<br/><br/><button type='submit'>Guardar</button></form>";
const char HTTP_FORM_LABEL[]       PROGMEM = "<label for='{i}'>{t}</label>";
const char HTTP_FORM_PARAM_HEAD[]  PROGMEM = "<hr><br/>";
const char HTTP_FORM_PARAM[]       PROGMEM = "<br/><input id='{i}' name='{n}' maxlength='{l}' value='{v}' {c}>";

const char HTTP_SCAN_LINK[]        PROGMEM = "<br/><form action='/wifi?refresh=1' method='POST'><button name='refresh' value='1'>Refrescar</button></form>";
const char HTTP_SAVED[]            PROGMEM = "<div class='msg'>Guardando las credenciales<br/>Intentando conectar con la red<br />Si falla reconecte otra vez con el equipo e intente el proceso de nuevo</div>";
const char HTTP_PARAMSAVED[]       PROGMEM = "<div class='msg S'>Guardado<br/></div>";
const char HTTP_END[]              PROGMEM = "</div></body></html>";
const char HTTP_ERASEBTN[]         PROGMEM = "<br/><form action='/erase' method='get'><button class='D'>Borrar configuracion WiFi</button></form>";
const char HTTP_UPDATEBTN[]        PROGMEM = "<br/><form action='/update' method='get'><button>Actualizar</button></form>";
const char HTTP_BACKBTN[]          PROGMEM = "<hr><br/><form action='/' method='get'><button>Atras</button></form>";

const char HTTP_STATUS_ON[]        PROGMEM = "<div class='msg S'><strong>Conectado</strong> a {v}<br/><em><small>con la IP{i}</small></em></div>";
const char HTTP_STATUS_OFF[]       PROGMEM = "<div class='msg {c}'><strong>No conectado</strong> a {v}{r}</div>"; // {c=class} {v=ssid} {r=status_off}
const char HTTP_STATUS_OFFPW[]     PROGMEM = "<br/>Autentificación fallida"; // STATION_WRONG_PASSWORD,  no eps32
const char HTTP_STATUS_OFFNOAP[]   PROGMEM = "<br/>AP no encontrado";   // WL_NO_SSID_AVAIL
const char HTTP_STATUS_OFFFAIL[]   PROGMEM = "<br/>No se pudo conectar"; // WL_CONNECT_FAILED
const char HTTP_STATUS_NONE[]      PROGMEM = "<div class='msg'>Ningun punto de acceso seleccionado</div>";
const char HTTP_BR[]               PROGMEM = "<br/>";

const char HTTP_STYLE[]            PROGMEM = "<style>"
".c,body{text-align:center;font-family:verdana}div,input{padding:5px;font-size:1em;margin:5px 0;box-sizing:border-box;}"
"input,button,.msg{border-radius:.3rem;width: 100%},input[type=radio]{width: auto}"
"button,input[type='button'],input[type='submit']{cursor:pointer;border:0;background-color:#71A416;color:#fff;line-height:2.4rem;font-size:1.2rem;width:100%}"
"input[type='file']{border:1px solid #1fa3ec}"
".wrap {text-align:left;display:inline-block;min-width:260px;max-width:500px}"
// links
"a{color:#000;font-weight:700;text-decoration:none}a:hover{color:#1fa3ec;text-decoration:underline}"
// quality icons
".q{height:16px;margin:0;padding:0 5px;text-align:right;min-width:38px;float:right}.q.q-0:after{background-position-x:0}.q.q-1:after{background-position-x:-16px}.q.q-2:after{background-position-x:-32px}.q.q-3:after{background-position-x:-48px}.q.q-4:after{background-position-x:-64px}.q.l:before{background-position-x:-80px;padding-right:5px}.ql .q{float:left}.q:after,.q:before{content:'';width:16px;height:16px;display:inline-block;background-repeat:no-repeat;background-position: 16px 0;"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAGAAAAAQCAMAAADeZIrLAAAAJFBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADHJj5lAAAAC3RSTlMAIjN3iJmqu8zd7vF8pzcAAABsSURBVHja7Y1BCsAwCASNSVo3/v+/BUEiXnIoXkoX5jAQMxTHzK9cVSnvDxwD8bFx8PhZ9q8FmghXBhqA1faxk92PsxvRc2CCCFdhQCbRkLoAQ3q/wWUBqG35ZxtVzW4Ed6LngPyBU2CobdIDQ5oPWI5nCUwAAAAASUVORK5CYII=');}"
// icons @2x media query (32px rescaled)
"@media (-webkit-min-device-pixel-ratio: 2),(min-resolution: 192dpi){.q:before,.q:after {"
"background-image:url('data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAALwAAAAgCAMAAACfM+KhAAAALVBMVEX///8AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAADAOrOgAAAADnRSTlMAESIzRGZ3iJmqu8zd7gKjCLQAAACmSURBVHgB7dDBCoMwEEXRmKlVY3L//3NLhyzqIqSUggy8uxnhCR5Mo8xLt+14aZ7wwgsvvPA/ofv9+44334UXXngvb6XsFhO/VoC2RsSv9J7x8BnYLW+AjT56ud/uePMdb7IP8Bsc/e7h8Cfk912ghsNXWPpDC4hvN+D1560A1QPORyh84VKLjjdvfPFm++i9EWq0348XXnjhhT+4dIbCW+WjZim9AKk4UZMnnCEuAAAAAElFTkSuQmCC');"
"background-size: 95px 16px;}}"
// msg callouts
".msg{padding:20px;margin:20px 0;border:1px solid #eee;border-left-width:5px;border-left-color:#71A416}.msg h4{margin-top:0;margin-bottom:5px}.msg.P{border-left-color:#1fa3ec}.msg.P h4{color:#1fa3ec}.msg.D{border-left-color:#dc3630}.msg.D h4{color:#dc3630}.msg.S{border-left-color: #5cb85c}.msg.S h4{color: #5cb85c}"
// lists
"dt{font-weight:bold}dd{margin:0;padding:0 0 0.5em 0;min-height:12px}"
"td{vertical-align: top;}"
".h{display:none}"
"button.D{background-color:#dc3630}"
// invert
"body.invert,body.invert a,body.invert h1 {background-color:#060606;color:#fff;}"
"body.invert .msg{color:#fff;background-color:#282828;border-top:1px solid #555;border-right:1px solid #555;border-bottom:1px solid #555;}"
"body.invert .q[role=img]{-webkit-filter:invert(1);filter:invert(1);}"
"input:disabled {opacity: 0.5;}"
"</style>";

#ifndef WM_NOHELP
const char HTTP_HELP[]             PROGMEM =
"<br/><h3>Paginas disponibles</h3><hr>"
"<table class='table'>"
"<thead><tr><th>Pagina</th><th>Funcion</th></tr></thead><tbody>"
"<tr><td><a href='/'>/</a></td>"
"<td>Menu page.</td></tr>"
"<tr><td><a href='/wifi'>/wifi</a></td>"
"<td>Muestra los resultados escaneados y entra en la configuracion de WiFi(/0wifi noscan)</td></tr>"
"<tr><td><a href='/wifisave'>/wifisave</a></td>"
"<td>Guarda las configuraciones y la informacion de WiFi, necesita las variables proporcionadas</td></tr>"
"<tr><td><a href='/param'>/param</a></td>"
"<td>Parametros de pagina</td></tr>"
"<tr><td><a href='/info'>/info</a></td>"
"<td>Informacion de pagina</td></tr>"
"<tr><td><a href='/u'>/u</a></td>"
"<td>Actualizacion OTA</td></tr>"
"<tr><td><a href='/close'>/close</a></td>"
"<td>Cierra el poup, el portal de configuracion permanecera activo</td></tr>"
"<tr><td>/exit</td>"
"<td>Salir del portal de configuracion</td></tr>"
"<tr><td>/restart</td>"
"<td>Reiniciar el dispositivo</td></tr>"
"<tr><td>/erase</td>"
"<td>Borrar la configuracion WiFi y reiniciar el dispositivo. El dispositivo no reconectara a la red hasta que se vuelva a configurar.</td></tr>"
"</table>";
//"<p/>More information about WiFiManager at <a href='https://github.com/tzapu/WiFiManager'>https://github.com/tzapu/WiFiManager</a>.";
#else
const char HTTP_HELP[]             PROGMEM = "";
#endif

const char HTTP_UPDATE[] PROGMEM = "Actualizar nuevo Firmware<br/><form method='POST' action='u' enctype='multipart/form-data' onchange=\"(function(el){document.getElementById('uploadbin').style.display = el.value=='' ? 'none' : 'initial';})(this)\"><input type='file' name='update' accept='.bin,application/octet-stream'><button id='uploadbin' type='submit' class='h D'>Actualizar</button></form><small><a href='http://192.168.4.1/update' target='_blank'>* Es posible que no funcione dentro del captive portal, abra en el navegador http://192.168.4.1</a><small>";
const char HTTP_UPDATE_FAIL[] PROGMEM = "<div class='msg D'><strong>Actualizacion fallida</strong><Br/>Reinicie el dispositivo y vuelva a intentarlo</div>";
const char HTTP_UPDATE_SUCCESS[] PROGMEM = "<div class='msg S'><strong>Actualizacion exitosa  </strong> <br/> Su dispositivo se reiniciara...</div>";

#ifdef WM_JSTEST
const char HTTP_JS[] PROGMEM =
"<script>function postAjax(url, data, success) {"
"    var params = typeof data == 'string' ? data : Object.keys(data).map("
"            function(k){ return encodeURIComponent(k) + '=' + encodeURIComponent(data[k]) }"
"        ).join('&');"
"    var xhr = window.XMLHttpRequest ? new XMLHttpRequest() : new ActiveXObject(\"Microsoft.XMLHTTP\");"
"    xhr.open('POST', url);"
"    xhr.onreadystatechange = function() {"
"        if (xhr.readyState>3 && xhr.status==200) { success(xhr.responseText); }"
"    };"
"    xhr.setRequestHeader('X-Requested-With', 'XMLHttpRequest');"
"    xhr.setRequestHeader('Content-Type', 'application/x-www-form-urlencoded');"
"    xhr.send(params);"
"    return xhr;}"
"postAjax('/status', 'p1=1&p2=Hello+World', function(data){ console.log(data); });"
"postAjax('/status', { p1: 1, p2: 'Hello World' }, function(data){ console.log(data); });"
"</script>";
#endif

// Info html
#ifdef ESP32
const char HTTP_INFO_esphead[]    PROGMEM = "<h3>Sequopro</h3><hr><dl>";
const char HTTP_INFO_chiprev[]    PROGMEM = "<dt>Chip Rev</dt><dd>{1}</dd>";
const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>CPU0: {1}<br/>CPU1: {2}</dd>";
const char HTTP_INFO_aphost[]     PROGMEM = "<dt>Acccess Point Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_psrsize[]    PROGMEM = "<dt>PSRAM Size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_temp[]       PROGMEM = "<dt>Temperature</dt><dd>{1} C&deg; / {2} F&deg;</dd><dt>Hall</dt><dd>{3}</dd>";
#else
const char HTTP_INFO_esphead[]    PROGMEM = "<h3>esp8266</h3><hr><dl>";
const char HTTP_INFO_fchipid[]    PROGMEM = "<dt>Flash Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_corever[]    PROGMEM = "<dt>Core Version</dt><dd>{1}</dd>";
const char HTTP_INFO_bootver[]    PROGMEM = "<dt>Boot Version</dt><dd>{1}</dd>";
const char HTTP_INFO_lastreset[]  PROGMEM = "<dt>Last reset reason</dt><dd>{1}</dd>";
const char HTTP_INFO_flashsize[]  PROGMEM = "<dt>Real Flash Size</dt><dd>{1} bytes</dd>";
#endif

const char HTTP_INFO_memsmeter[]  PROGMEM = "<br/><progress value='{1}' max='{2}'></progress></dd>";
const char HTTP_INFO_memsketch[]  PROGMEM = "<dt>Memory - Sketch Size</dt><dd>Used / Total bytes<br/>{1} / {2}";
const char HTTP_INFO_freeheap[]   PROGMEM = "<dt>Memory - Free Heap</dt><dd>{1} bytes available</dd>";
const char HTTP_INFO_wifihead[]   PROGMEM = "<br/><h3>WiFi</h3><hr>";
const char HTTP_INFO_uptime[]     PROGMEM = "<dt>Uptime</dt><dd>{1} Mins {2} Secs</dd>";
const char HTTP_INFO_chipid[]     PROGMEM = "<dt>Chip ID</dt><dd>{1}</dd>";
const char HTTP_INFO_idesize[]    PROGMEM = "<dt>Flash Size</dt><dd>{1} bytes</dd>";
const char HTTP_INFO_sdkver[]     PROGMEM = "<dt>SDK Version</dt><dd>{1}</dd>";
const char HTTP_INFO_cpufreq[]    PROGMEM = "<dt>CPU Frequency</dt><dd>{1}MHz</dd>";
const char HTTP_INFO_apip[]       PROGMEM = "<dt>Access Point IP</dt><dd>{1}</dd>";
const char HTTP_INFO_apmac[]      PROGMEM = "<dt>Access Point MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_apssid[]     PROGMEM = "<dt>Access Point SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_apbssid[]    PROGMEM = "<dt>BSSID</dt><dd>{1}</dd>";
const char HTTP_INFO_stassid[]    PROGMEM = "<dt>Station SSID</dt><dd>{1}</dd>";
const char HTTP_INFO_staip[]      PROGMEM = "<dt>Station IP</dt><dd>{1}</dd>";
const char HTTP_INFO_stagw[]      PROGMEM = "<dt>Station Gateway</dt><dd>{1}</dd>";
const char HTTP_INFO_stasub[]     PROGMEM = "<dt>Station Subnet</dt><dd>{1}</dd>";
const char HTTP_INFO_dnss[]       PROGMEM = "<dt>DNS Server</dt><dd>{1}</dd>";
const char HTTP_INFO_host[]       PROGMEM = "<dt>Hostname</dt><dd>{1}</dd>";
const char HTTP_INFO_stamac[]     PROGMEM = "<dt>Station MAC</dt><dd>{1}</dd>";
const char HTTP_INFO_conx[]       PROGMEM = "<dt>Connected</dt><dd>{1}</dd>";
const char HTTP_INFO_autoconx[]   PROGMEM = "<dt>Autoconnect</dt><dd>{1}</dd>";


const char S_brand[]              PROGMEM = "SEQUOPRO";
const char S_debugPrefix[]        PROGMEM = "*wm:";
const char S_y[]                  PROGMEM = "Yes";
const char S_n[]                  PROGMEM = "No";
const char S_enable[]             PROGMEM = "Enabled";
const char S_disable[]            PROGMEM = "Disabled";
const char S_GET[]                PROGMEM = "GET";
const char S_POST[]               PROGMEM = "POST";
const char S_NA[]                 PROGMEM = "Unknown";
const char S_passph[]             PROGMEM = "********";
const char S_titlewifisaved[]     PROGMEM = "Credentials Saved";
const char S_titlewifisettings[]  PROGMEM = "Settings Saved";
const char S_titlewifi[]          PROGMEM = "Config ESP";
const char S_titleinfo[]          PROGMEM = "Info";
const char S_titleparam[]         PROGMEM = "Setup";
const char S_titleparamsaved[]    PROGMEM = "Setup Saved";
const char S_titleexit[]          PROGMEM = "Exit";
const char S_titlereset[]         PROGMEM = "Reset";
const char S_titleerase[]         PROGMEM = "Erase";
const char S_titleclose[]         PROGMEM = "Close";
const char S_options[]            PROGMEM = "options";
const char S_nonetworks[]         PROGMEM = "No networks found. Refresh to scan again.";
const char S_staticip[]           PROGMEM = "Static IP";
const char S_staticgw[]           PROGMEM = "Static Gateway";
const char S_staticdns[]          PROGMEM = "Static DNS";
const char S_subnet[]             PROGMEM = "Subnet";
const char S_exiting[]            PROGMEM = "Exiting";
const char S_resetting[]          PROGMEM = "Module will reset in a few seconds.";
const char S_closing[]            PROGMEM = "You can close the page, portal will continue to run";
const char S_error[]              PROGMEM = "An Error Occured";
const char S_notfound[]           PROGMEM = "File Not Found\n\n";
const char S_uri[]                PROGMEM = "URI: ";
const char S_method[]             PROGMEM = "\nMethod: ";
const char S_args[]               PROGMEM = "\nArguments: ";
const char S_parampre[]           PROGMEM = "param_";

// debug strings
const char D_HR[]                 PROGMEM = "--------------------";

// END WIFI_MANAGER_OVERRIDE_STRINGS
#endif

// -----------------------------------------------------------------------------------------------
// DO NOT EDIT BELOW THIS LINE

const uint8_t _nummenutokens = 10;
const char * const _menutokens[10] PROGMEM = {
	"wifi",
	"wifinoscan",
	"info",
	"param",
	"close",
	"restart",
	"exit",
	"erase",
	"update",
	"sep"
};

const char R_root[]               PROGMEM = "/";
const char R_wifi[]               PROGMEM = "/wifi";
const char R_wifinoscan[]         PROGMEM = "/0wifi";
const char R_wifisave[]           PROGMEM = "/wifisave";
const char R_info[]               PROGMEM = "/info";
const char R_param[]              PROGMEM = "/param";
const char R_paramsave[]          PROGMEM = "/paramsave";
const char R_restart[]            PROGMEM = "/restart";
const char R_exit[]               PROGMEM = "/exit";
const char R_close[]              PROGMEM = "/close";
const char R_erase[]              PROGMEM = "/erase";
const char R_status[]             PROGMEM = "/status";
const char R_update[]             PROGMEM = "/update";
const char R_updatedone[]         PROGMEM = "/u";


//Strings
const char S_ip[]                 PROGMEM = "ip";
const char S_gw[]                 PROGMEM = "gw";
const char S_sn[]                 PROGMEM = "sn";
const char S_dns[]                PROGMEM = "dns";

// softap ssid default prefix
#ifdef ESP8266
const char S_ssidpre[]        PROGMEM = "ESP";
#elif defined(ESP32)
const char S_ssidpre[]        PROGMEM = "ESP32";
#else
const char S_ssidpre[]        PROGMEM = "WM";
#endif

//Tokens
//@todo consolidate and reduce
const char T_ss[]                 PROGMEM = "{"; // token start sentinel
const char T_es[]                 PROGMEM = "}"; // token end sentinel
const char T_1[]                  PROGMEM = "{1}"; // @token 1
const char T_2[]                  PROGMEM = "{2}"; // @token 2
const char T_3[]                  PROGMEM = "{3}"; // @token 2
const char T_v[]                  PROGMEM = "{v}"; // @token v
const char T_I[]                  PROGMEM = "{I}"; // @token I
const char T_i[]                  PROGMEM = "{i}"; // @token i
const char T_n[]                  PROGMEM = "{n}"; // @token n
const char T_p[]                  PROGMEM = "{p}"; // @token p
const char T_t[]                  PROGMEM = "{t}"; // @token t
const char T_l[]                  PROGMEM = "{l}"; // @token l
const char T_c[]                  PROGMEM = "{c}"; // @token c
const char T_e[]                  PROGMEM = "{e}"; // @token e
const char T_q[]                  PROGMEM = "{q}"; // @token q
const char T_r[]                  PROGMEM = "{r}"; // @token r
const char T_R[]                  PROGMEM = "{R}"; // @token R
const char T_h[]                  PROGMEM = "{h}"; // @token h

// http
const char HTTP_HEAD_CL[]         PROGMEM = "Content-Length";
const char HTTP_HEAD_CT[]         PROGMEM = "text/html";
const char HTTP_HEAD_CT2[]        PROGMEM = "text/plain";
const char HTTP_HEAD_CORS[]       PROGMEM = "Access-Control-Allow-Origin";
const char HTTP_HEAD_CORS_ALLOW_ALL[]  PROGMEM = "*";

const char * const WIFI_STA_STATUS[] PROGMEM
{
  "WL_IDLE_STATUS",     // 0 STATION_IDLE
  "WL_NO_SSID_AVAIL",   // 1 STATION_NO_AP_FOUND
  "WL_SCAN_COMPLETED",  // 2
  "WL_CONNECTED",       // 3 STATION_GOT_IP
  "WL_CONNECT_FAILED",  // 4 STATION_CONNECT_FAIL, STATION_WRONG_PASSWORD(NI)
  "WL_CONNECTION_LOST", // 5
  "WL_DISCONNECTED",    // 6 
  "WL_STATION_WRONG_PASSWORD" // 7 KLUDGE 
};

#ifdef ESP32
const char * const AUTH_MODE_NAMES[] PROGMEM
{
	"OPEN",
	"WEP",
	"WPA_PSK",
	"WPA2_PSK",
	"WPA_WPA2_PSK",
	"WPA2_ENTERPRISE",
	"MAX"
};
#elif defined(ESP8266)
const char * const AUTH_MODE_NAMES[] PROGMEM
{
	"",
	"",
	"WPA_PSK",      // 2 ENC_TYPE_TKIP
	"",
	"WPA2_PSK",     // 4 ENC_TYPE_CCMP
	"WEP",          // 5 ENC_TYPE_WEP
	"",
	"OPEN",         //7 ENC_TYPE_NONE
	"WPA_WPA2_PSK", // 8 ENC_TYPE_AUTO
};
#endif

const char* const WIFI_MODES[] PROGMEM = { "NULL", "STA", "AP", "STA+AP" };


#ifdef ESP32
// as 2.5.2
// typedef struct {
//     char                  cc[3];   /**< country code string */
//     uint8_t               schan;   /**< start channel */
//     uint8_t               nchan;   /**< total channel number */
//     int8_t                max_tx_power;   /**< This field is used for getting WiFi maximum transmitting power, call esp_wifi_set_max_tx_power to set the maximum transmitting power. */
//     wifi_country_policy_t policy;  /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{ "US",1,11,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO };
const wifi_country_t WM_COUNTRY_CN{ "CN",1,13,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO };
const wifi_country_t WM_COUNTRY_JP{ "JP",1,14,CONFIG_ESP32_PHY_MAX_TX_POWER,WIFI_COUNTRY_POLICY_AUTO };
#elif defined(ESP8266) && !defined(WM_NOCOUNTRY)
// typedef struct {
//     char cc[3];               /**< country code string */
//     uint8_t schan;            /**< start channel */
//     uint8_t nchan;            /**< total channel number */
//     uint8_t policy;           /**< country policy */
// } wifi_country_t;
const wifi_country_t WM_COUNTRY_US{ "US",1,11,WIFI_COUNTRY_POLICY_AUTO };
const wifi_country_t WM_COUNTRY_CN{ "CN",1,13,WIFI_COUNTRY_POLICY_AUTO };
const wifi_country_t WM_COUNTRY_JP{ "JP",1,14,WIFI_COUNTRY_POLICY_AUTO };
#endif


/*
* ESP32 WiFi Events
0  SYSTEM_EVENT_WIFI_READY               < ESP32 WiFi ready
1  SYSTEM_EVENT_SCAN_DONE                < ESP32 finish scanning AP
2  SYSTEM_EVENT_STA_START                < ESP32 station start
3  SYSTEM_EVENT_STA_STOP                 < ESP32 station stop
4  SYSTEM_EVENT_STA_CONNECTED            < ESP32 station connected to AP
5  SYSTEM_EVENT_STA_DISCONNECTED         < ESP32 station disconnected from AP
6  SYSTEM_EVENT_STA_AUTHMODE_CHANGE      < the auth mode of AP connected by ESP32 station changed
7  SYSTEM_EVENT_STA_GOT_IP               < ESP32 station got IP from connected AP
8  SYSTEM_EVENT_STA_LOST_IP              < ESP32 station lost IP and the IP is reset to 0
9  SYSTEM_EVENT_STA_WPS_ER_SUCCESS       < ESP32 station wps succeeds in enrollee mode
10 SYSTEM_EVENT_STA_WPS_ER_FAILED        < ESP32 station wps fails in enrollee mode
11 SYSTEM_EVENT_STA_WPS_ER_TIMEOUT       < ESP32 station wps timeout in enrollee mode
12 SYSTEM_EVENT_STA_WPS_ER_PIN           < ESP32 station wps pin code in enrollee mode
13 SYSTEM_EVENT_AP_START                 < ESP32 soft-AP start
14 SYSTEM_EVENT_AP_STOP                  < ESP32 soft-AP stop
15 SYSTEM_EVENT_AP_STACONNECTED          < a station connected to ESP32 soft-AP
16 SYSTEM_EVENT_AP_STADISCONNECTED       < a station disconnected from ESP32 soft-AP
17 SYSTEM_EVENT_AP_STAIPASSIGNED         < ESP32 soft-AP assign an IP to a connected station
18 SYSTEM_EVENT_AP_PROBEREQRECVED        < Receive probe request packet in soft-AP interface
19 SYSTEM_EVENT_GOT_IP6                  < ESP32 station or ap or ethernet interface v6IP addr is preferred
20 SYSTEM_EVENT_ETH_START                < ESP32 ethernet start
21 SYSTEM_EVENT_ETH_STOP                 < ESP32 ethernet stop
22 SYSTEM_EVENT_ETH_CONNECTED            < ESP32 ethernet phy link up
23 SYSTEM_EVENT_ETH_DISCONNECTED         < ESP32 ethernet phy link down
24 SYSTEM_EVENT_ETH_GOT_IP               < ESP32 ethernet got IP from connected AP
25 SYSTEM_EVENT_MAX
*/

#endif