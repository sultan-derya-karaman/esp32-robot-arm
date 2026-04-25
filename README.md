# Robot Süpürge Üzerine ESP32 Kontrollü Robot Kol

Bu projede Vestel V-Bot robot süpürgenin üzerine bir robot kol entegre ettik. Amaç, temel bir mobil kontrollü hareket sistemi ve kavrama mekanizması oluşturmaktı.

## Kullanılan Malzemeler
- ESP32 DevKit V1  
- 3 adet MG996R servo motor  
- 1 adet micro servo (kıskaç için)  
- XL4015 buck converter  
- Harici güç kaynağı  

## Proje Açıklaması
Robot kol, ESP32 üzerinden kontrol edilmektedir. Servo motorlar ile temel hareketler sağlanmıştır.

Güç ihtiyacı XL4015 buck converter ile düşürülerek servolara uygun hale getirilmiştir.

Kıskaç kısmında 1 adet micro servo kullanılmıştır, diğer 3 servo ise kol hareketleri için kullanılmıştır.

## Notlar
- Sistem manuel kontrol mantığıyla çalışmaktadır  
- Mekanik montaj, elektrik bağlantıları ve uygulama tarafımca yapılmıştır  

## Durum
Proje geliştirme aşamasındadır, mekanik ve elektriksel yapı çalışır durumdadır.

## GitHub
github.com/sultan-derya-karaman
