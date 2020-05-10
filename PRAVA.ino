
#include <DHT.h>


#include <DHT.h>; //Knjiznica za DHT sensor
#include <DS3231.h> // Knjiznica za mdodul DS3231


#define DHTPIN 10     // Določitev pina za DHT
#define DHTTYPE DHT22   // DHT 22  (AM2302)
DHT dht(DHTPIN, DHTTYPE); //// Initialize DHT sensor for normal 16mhz Arduino

#include <LiquidCrystal.h> // Knjižnica za LCD zaslon

float vl;  //Spremenljivka za vlažnost
int tem; //Spremenljivka za temperaturo


DS3231  rtc(SDA, SCL); 
String rtcCas, rtcDatum;
LiquidCrystal lcd(8, 9, 4, 5, 6, 7); //določitev pinov za LCD
void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2); //Določimo koliko stolpcev in vrstic bomo uporabili.
  dht.begin();
  rtc.begin();
  //rtc.setCas(18, 03, 0);     // Nastavimo čas 12:00:00 (24hr format)
  //rtc.setDatum(14, 4, 2020);   // Nastavimo dan mesec in leto January 1st, 2014
}

void loop()
{
    //Prebere podatke od temerature in vlažnosti in jih zarčuna v kjižnici ter jih shrani v spremenljivki vl in tem
    vl = dht.readHumidity();
    tem= dht.readTemperature();
  // Prebere podatke za čas in datum, ki so shranjeni v kjižnici ter jih shrani pod spremenljivki rtcCas rtcDatum.  
  rtcDatum = rtc.getDateStr();
  rtcCas = rtc.getTimeStr();
  rtcCas.remove(5);
    //S temi ukazi izpišemo čas, datum in temperaturo na zaslonu
      lcd.setCursor(0, 0); //Določimo v kateri vrstici se bo izpisal čas in datum
      lcd.print(rtcCas);
      lcd.print(" ");
      lcd.print(rtcDatum);
    lcd.setCursor(0, 1);//Določimo v kateri vrstici se bo izpisal čas in datum
    lcd.print("V:");
    lcd.print(vl,1);
    lcd.print(" %");
    lcd.print(" T:");
    lcd.print(tem);
    lcd.print(" C");
}
