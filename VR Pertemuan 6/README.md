# Laporan Tugas Pemrograman Game Pertemuan Ke 6
1. **Tambahkan panorama pada halaman menu.**
- Buat image panoramic, ubah menjadi cube dan mapping ganti ke latitude-longtitude layout
![screenshoot](https://github.com/Ndah28/Pemrograman-Game/blob/master/VR%20Pertemuan%206/ScreenShoot/skybox1.png "setting MainCamera")
- Buat panoramic material (panomat) dan ubah menjadi skybox dan pilih cubemap, masukkan cubemap ke dalam panomat
- lalu masukkan panomat ke dalam setting skybox material pada environment

  ![screenshoot](https://github.com/Ndah28/Pemrograman-Game/blob/master/VR%20Pertemuan%206/ScreenShoot/panomat.png "setting environment")
- Berikut ini tampilan dari halaman menu
![screenshoot](https://github.com/Ndah28/Pemrograman-Game/blob/master/VR%20Pertemuan%206/ScreenShoot/buttonmouseover.png "halaman utama")

2. **Ubah hasil klik tombol Game menjadi pindah ke halaman Menu Game yang berisi beberapa tombol, dimana setiap tombol mengarah ke Game yang dibuat pada minggu ke-3, ke-4, dan ke-5.**
- Halaman menu utama, apabila button difokuskan akan berubah warna menjadi merah dan apabila button diklik maka akan berubah warna menjadi biru

  ![screenshoot](https://github.com/Ndah28/Pemrograman-Game/blob/master/VR%20Pertemuan%206/ScreenShoot/buttonmouseover.png "halaman utama")
- itu karena kita rubah warna pada highlight color dan pressed color

  ![screenshoot](https://github.com/Ndah28/Pemrograman-Game/blob/master/VR%20Pertemuan%206/ScreenShoot/ButtonOnClick.png "button on click")
- Apabila button Game diklik akan mengarahkan pada scane Menu Game yang berisi beberapa button game perminggunya. Button menu game ini sifatnya juga sama apabila difokuskan atau diklik maka button berubah warna dan mengarahkan pada game yang dimaksud
![screenshoot](https://github.com/Ndah28/Pemrograman-Game/blob/master/VR%20Pertemuan%206/ScreenShoot/HalamanMenuGame.png "halaman menu game")
![screenshoot](https://github.com/Ndah28/Pemrograman-Game/blob/master/VR%20Pertemuan%206/ScreenShoot/buttongame1.png "button game1 diklik dialihkan ke game pertemuan ke-3")
![screenshoot](https://github.com/Ndah28/Pemrograman-Game/blob/master/VR%20Pertemuan%206/ScreenShoot/buttongame2.png "button game2 diklik dialihkan ke game pertemuan ke-4")
![screenshoot](https://github.com/Ndah28/Pemrograman-Game/blob/master/VR%20Pertemuan%206/ScreenShoot/buttongame3.png "button game3 diklik dialihkan ke game pertemuan ke-4")
- Apabila button Kembali diklik maka akan diarahkan ke halaman menu utama

  ![screenshoot](https://github.com/Ndah28/Pemrograman-Game/blob/master/VR%20Pertemuan%206/ScreenShoot/buttonkembali.png "button kembali diklik dialihkan ke halaman/menu utama")
- Berikut merupakan kode program agar bisa berpindah scene
 
  ![screenshoot](https://github.com/Ndah28/Pemrograman-Game/blob/master/VR%20Pertemuan%206/ScreenShoot/scriptHalUtama.png "kode program pindah scene")

3. **Untuk setiap tombol yang diklik (kecuali tombol keluar), munculkan tulisan di layar Game ((Nama Mahasiswa) memasuki Game Minggu Ke- (nomor minggu yang dimaksud)).**
- Berikut ini kode program untuk menampilkan tulisan di layar game dalam beberapa detik
![screenshoot](https://github.com/Ndah28/Pemrograman-Game/blob/master/VR%20Pertemuan%206/ScreenShoot/scripttextinfo.png "kode program pindah tampil tulisan")
- Agar bisa bekerja, maka kode program tersebut dimasukkan pada text disetiap game
- Berikut ini hasil pada Game1 (Game Minggu ke-3)
![screenshoot](https://github.com/Ndah28/Pemrograman-Game/blob/master/VR%20Pertemuan%206/ScreenShoot/textinfogame3.png "tampilan game minggu ke-3")
- Berikut ini hasil pada Game2 (Game Minggu ke-4)
![screenshoot](https://github.com/Ndah28/Pemrograman-Game/blob/master/VR%20Pertemuan%206/ScreenShoot/textinfogame4.png "tampilan game minggu ke-4")
- Berikut ini hasil pada Game3 (Game Minggu ke-5)
![screenshoot](https://github.com/Ndah28/Pemrograman-Game/blob/master/VR%20Pertemuan%206/ScreenShoot/textinfogame5.png "tampilan game minggu ke-5")
