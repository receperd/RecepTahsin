Hazine Avı Oyunu

Bu, C++ ile yazılmış basit bir konsol tabanlı hazine avı oyunudur. Oyuncu, bir ızgara üzerinde hareket ederek rastgele yerleştirilmiş hazineyi bulmaya çalışır. Her seviye giderek zorlaşır ve oyuncu hazineyi bulduğunda oyun sıfırlanır.

Özellikler

W, A, S, D tuşları ile oyuncu hareketi.

Her seviye için rastgele hazine konumu.

Konsol tabanlı ızgara gösterimi.

Zorluk seviyesi artışı.

Gereksinimler

C++17 desteği olan bir C++ derleyici.

Konsol girişi için conio.h kütüphanesi (Windows).

Derleme ve Çalıştırma

Projeyi derlemek ve çalıştırmak için aşağıdaki komutu kullanabilirsiniz:

g++ -std=c++17 -Wall -Iinclude src/*.cpp -o build/TreasureHuntGame

Adımlar:

Bir terminal açın ve projenin ana dizinine gidin.

Dizin yapısının şu şekilde olduğundan emin olun:

include/       # Başlık dosyaları
src/           # Kaynak dosyaları
build/         # Çıktı dizini (manuel olarak oluşturulmalı)

Yukarıdaki g++ komutunu çalıştırın.

Oyunu başlatmak için şu komutu çalıştırın:

./build/TreasureHuntGame

Nasıl Oynanır

Oyun, bir ızgara üzerinde P (oyuncu) ve T (hazine) simgelerini göstererek başlar.

Oyuncuyu hareket ettirmek için şu tuşları kullanın:

W: Yukarı hareket

S: Aşağı hareket

A: Sola hareket

D: Sağa hareket

Amaç, oyuncuyu (P) hazineye (T) ulaştırmaktır.

Hazine bulunduğunda seviye sıfırlanır ve hazine yeni bir rastgele konuma yerleştirilir.

Kod Yapısı

Position.h: Koordinat bilgisini yöneten temel sınıf.

Player.h ve Player.cpp: Oyuncu hareketini ve pozisyonunu yönetir.

Treasure.h: Hazinenin pozisyonunu temsil eder.

Game.h ve Game.cpp: Ana oyun mantığını ve ızgara çizimini uygular.

main.cpp: Uygulamanın giriş noktası.

Notlar

Oyun, conio.h kullanımından dolayı Windows için tasarlanmıştır.

Başka bir platform kullanıyorsanız, conio.h işlevselliğini platformlar arası bir alternatifle değiştirmeniz gerekebilir.
