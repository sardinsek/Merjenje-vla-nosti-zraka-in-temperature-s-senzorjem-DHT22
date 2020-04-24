# Merjenje-vla-nosti-zraka-in-temperature-s-senzorjem-DHT22
Cilj  projekta je merjenje  zračne  vlažnost  in temerature s senzorjem DHT22 in to prikazati na LCD zaslonu. 
Pri progrgramiranju senzorja DHT22 sem uporabil knjižnico DHT, za lažjo kalibracijo senzorja. Vezju sem dodal še modul DS3231 za realni čas in datum ter LCD zaslon, na katerem je prikazan čas in datum ter temperatura in vlažnost zraka.
Pri programiranju modula DS3231 sem uporabil knjižnico DS3231. Za LCD zaslon pa knjižnico LiquidCrystal, ki pa je že naložena v Arduino programu. Knjižnici sem naložil tudi med datoteke. 
DELOVANJE SENZORJA:
Senzor zajema podatke glede temperature in vlažnosti zraka ter te podatke pošlje na Arduino. V Arduino programu podatke obdelamo tako, da nam najprej izpisuje temperaturo in vlago na seriskem vmesniku, ko nam te podatke pravilno izpisuje na serjiskem vmesniku, lahko vrednosti pošljemo na LCD zaslon, kjer nam jih izpisuje.   
OPIS VIDEO POSNETKA:
Na video posnetku vidite vezavo na protobordu in kakšne module sem uporabil. Na LCD zaslonu v zgornji vrstici najprej pokaže točen čas in datum. V spodnji vrstici pa naprej pod črko V izpiše vlažnost zraka v procentih potem pa še pod črko T temperaturo v stopinjah celzija.
KOSOVNICA:
- 1x Arduino UNO.
- 1x Modul DS3231 za realni čas.
- 1x 3 V baterija za napajanje modula DS3231.
- 1x Senzor DHT22 (AM2302) s štirimi pini.
- 1x 16x2 znakovni LCD display.
- 1x 10 kiloohmski potenciometer. 
- 1x USB kabl za printer.
- 16x Arduino spojne žice 150mm.
- 11x Arduino spojne žice 120mm.
