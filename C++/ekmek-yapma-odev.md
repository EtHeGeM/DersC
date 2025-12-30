Bir ekmek yapım atölyesinin stok ve process takibi için bir algoritma geliştirilmesi gerekiyor.
Bir ekmek yapımı, 6 adımdan oluşur,
1. Malzeme kontrolü
2. Buğdayın inceltilip un yapılması
3. un, su, maya birleştirilmesi ve hamur yapılması
4. hamurun dinlendirilmesi
5. dinlendirilen hamurun pişirilmesi
döngü tamamlandıkça stok kontrolü yapılıp tekrar başlar.
Çıktı olarak process lerin tamamlandığı veya bir problem olduğu terminalden çıktı verilir.

- array kullanılarak değerler saklanacak, index yerlerini bir yere not alabilirsin
- program başlangıcında, buğday var mı kontrolü yapılacak, buğday yoksa, buğday alınsın mı sorusu sorulacak ve cevaba göre program ya stok yenileyecek ve çalışacak, ya da kapatılacak
- ikinci adımda, yeterli un var mı kontrol edilecek, eğer yoksa buğday stoğu, belirli bir değerin üstündeyse, una çevrilecek, un stoğu artacak, buğday stoğu azalacak
- su, maya stokları kontrol edilecek, stok yenilemesi gerekiyorsa ilk adıma benzer bir çalışma yapılacak
- un, su, maya bulunduğu durumda, üçünün stokları yeterli olarak azalacak, hamur elde edilecek.
