#include <stdio.h>
#include <stdlib.h>


//Deklarasi untuk menu Surat Lamaran Pekerjaan
int slp_online ()
{
    char wilayah_buat [100], waktu_buat [100], pt_tujuan [100], alamat_pt [100], info_loker [100], posisi_tujuan[100], perihal [100], lampiran [100];
    char nama_pelamar [100], ttl_pelamar[100], alamat_pelamar [100],pendidikan_terakhir[100],telepon_pelamar [100], email_pelamar [100],pengalaman_kerja [100];
    char berkas1 [100],berkas2 [100],berkas3 [100],berkas4 [100],berkas5 [100],berkas6 [100],berkas7 [100],berkas8 [100];
    char pilihan, ulangi;
    int  c=0;


        printf ("Silahkan Anda Isi Terlebih Dahulu Data Di Bawah Ini:\n");
        wilayah_buat        : printf ("1.Wilayah Pelamar (Kabupaten/Kota)  : ");gets (wilayah_buat);       if (c==1) {goto cek;}
        waktu_buat          : printf ("2.Tanggal Pembuatan Surat           : ");gets (waktu_buat);         if (c==1) {goto cek;}
        pt_tujuan           : printf ("3.PT/CV/Instansi yang Dituju        : ");gets (pt_tujuan);          if (c==1) {goto cek;}
        alamat_pt           : printf ("4.Alamat PT/CV/Instansi Tujuan      : ");gets (alamat_pt);          if (c==1) {goto cek;}
        info_loker          : printf ("5.Sumber Lowongan Pekerjaan         : ");gets (info_loker);         if (c==1) {goto cek;}
        posisi_tujuan       : printf ("6.Posisi/Jabatan yang Dilamar       : ");gets (posisi_tujuan);      if (c==1) {goto cek;}
        perihal             : printf ("7.Perihal                           : ");gets (perihal);            if (c==1) {goto cek;}
        lampiran            : printf ("8.Jumlah Lampiran                   : ");gets (lampiran);           if (c==1) {goto cek;}
        nama_pelamar        : printf ("9.Nama                              : ");gets (nama_pelamar);       if (c==1) {goto cek;}
        ttl_pelamar         : printf ("10.Tempat & Tanggal Lahir           : ");gets (ttl_pelamar);        if (c==1) {goto cek;}
        alamat_pelamar      : printf ("11.Alamat                           : ");gets (alamat_pelamar);     if (c==1) {goto cek;}
        telepon_pelamar     : printf ("12.Nomor Telepon                    : ");gets (telepon_pelamar);    if (c==1) {goto cek;}
        email_pelamar       : printf ("13.Email                            : ");gets (email_pelamar);      if (c==1) {goto cek;}
        pendidikan_terakhir : printf ("14.Pendidikan Terakhir              : ");gets (pendidikan_terakhir);if (c==1) {goto cek;}
        pengalaman_kerja    : printf ("15.Pengalaman Kerja yang Utama      : ");gets (pengalaman_kerja);   if (c==1) {goto cek;}
        berkas1             : printf ("16.Berkas 1 yang di Lampirkan       : ");gets (berkas1);            if (c==1) {goto cek;}
        berkas2             : printf ("17.Berkas 2 yang di Lampirkan       : ");gets (berkas2);            if (c==1) {goto cek;}
        berkas3             : printf ("18.Berkas 3 yang di Lampirkan       : ");gets (berkas3);            if (c==1) {goto cek;}
        berkas4             : printf ("19.Berkas 4 yang di Lampirkan       : ");gets (berkas4);            if (c==1) {goto cek;}
        berkas5             : printf ("20.Berkas 5 yang di Lampirkan       : ");gets (berkas5);            if (c==1) {goto cek;}
        berkas6             : printf ("21.Berkas 6 yang di Lampirkan       : ");gets (berkas6);            if (c==1) {goto cek;}
        berkas7             : printf ("22.Berkas 7 yang di Lampirkan       : ");gets (berkas7);            if (c==1) {goto cek;}
        berkas8             : printf ("23.Berkas 8 yang di Lampirkan       : ");gets (berkas8);            if (c==1) {goto cek;}

        char opsi;
        c=1;
        cek:
        printf ("===================================================================================================\n");
        printf ("\n\nApakah data yang Anda masukkan sudah benar? (y/t): ");scanf ("%c%*c",&opsi);
         if (opsi=='t')
            {
            int nomor;
            printf ("Bagian mana yang ingin diubah (input nomor)      : "); scanf ("%d%*c",&nomor);
            printf ("===================================================================================================\n");
            switch (nomor)
               {
                case 1  : goto wilayah_buat;
                case 2  : goto waktu_buat;
                case 3  : goto pt_tujuan;
                case 4  : goto alamat_pt;
                case 5  : goto info_loker;
                case 6  : goto posisi_tujuan;
                case 7  : goto perihal;
                case 8  : goto lampiran;
                case 9  : goto nama_pelamar;
                case 10 : goto ttl_pelamar;
                case 11 : goto alamat_pelamar;
                case 12 : goto telepon_pelamar;
                case 13 : goto email_pelamar;
                case 14 : goto pendidikan_terakhir;
                case 15 : goto pengalaman_kerja;
                case 16 : goto berkas1;
                case 17 : goto berkas2;
                case 18 : goto berkas3;
                case 19 : goto berkas4;
                case 20 : goto berkas5;
                case 21 : goto berkas6;
                case 22 : goto berkas7;
                case 23 : goto berkas8;
              }
            }
        else
        {
            printf ("Data Anda dikirim...\n");
        }


        printf ("\n===================================================================================================\n");
        printf ("\t\t\t\t\t\tSURAT LAMARAN PEKERJAAN\n");
        printf ("===================================================================================================\n");
        printf ("\t\t\t\t\t\t\t\t %s,",wilayah_buat);
        printf ("%s\n",waktu_buat);
        printf ("Lampiran    : %s\n",lampiran);
        printf ("Perihal     : %s\n\n",perihal);
        printf ("Yth. Pimpinan %s\n", pt_tujuan);
        printf ("%s\n\n",alamat_pt);
        printf ("Dengan hormat,\n");
        printf ("    Sehubungan dengan informasi lowongan pekerjaan dari %s saya bermaksud\n melamar pekerjaan di perusahaan Bapak/Ibu sebagai %s\n",info_loker,posisi_tujuan);
        printf ("Adapun data diri saya adalah\n");
        printf ("nama                 : %s\n",nama_pelamar);
        printf ("tempat,tanggal lahir : %s\n",ttl_pelamar);
        printf ("alamat               : %s\n",alamat_pelamar);
        printf ("nomor telepon        : %s\n",telepon_pelamar);
        printf ("email                : %s\n",email_pelamar);
        printf ("pendidikan terakhir  : %s\n\n",pendidikan_terakhir);
        printf ("Saya mampu bekerja secara individu maupun kelompok dengan baik dan teratur.\n");
        printf ("Memiliki pengalaman kerja sebagai %s. Saya juga\n bersedia menanggung sanksi jika saya melanggar aturan yang ditentukan\n\n",pengalaman_kerja);
        printf ("Sebagai bahan pertimbangan,saya lampirkan\n");
        printf ("1.%s\n",berkas1);
        printf ("2.%s\n",berkas2);
        printf ("3.%s\n",berkas3);
        printf ("4.%s\n",berkas4);
        printf ("5.%s\n",berkas5);
        printf ("6.%s\n",berkas6);
        printf ("7.%s\n",berkas7);
        printf ("8.%s\n\n",berkas8);
        printf ("Besar harapan saya dapat bergabung di perusahaan yang Bapak/Ibu pimpin./n");
        printf ("Atas perhatian Bapak/Ibu, saya ucapkan terima kasih.\n\n\n");
        printf ("\t\t\t\t\t\t\t\t Hormat saya,\n\n\n\n\n\n");
        printf ("\t\t\t\t\t\t\t\t %s",nama_pelamar);

 return 0;
}


//Deklarasi untuk menu Daftar Riwayat Hidup
int drh_online()
{
    char nama [100], ttl [100], alamat[100], umur [100], agama [100], jenis_kelamin [100], no_telpon [100];
    char email [100], sekolah_dasar[100], smp [100], sma [100], pendidikan_lanjut [100], negara [100];
    char riwayat_kerja1 [1000], riwayat_kerja2 [1000], riwayat_kerja3 [1000], riwayat_kerja4 [1000], riwayat_kerja5 [1000];
    char tanggal_buat [100], lokasi_buat [100];
    int c=0;

        printf ("Silahkan Anda Isi Terlebih Dahulu Data Di Bawah Ini:\n");
        nama              : printf ("1.Nama                   : ");gets(nama);             if (c==1) {goto cek;}
        ttl               : printf ("2.Tempat/Tanggal Lahir   : ");gets(ttl);              if (c==1) {goto cek;}
        alamat            : printf ("3.Alamat                 : ");gets(alamat);           if (c==1) {goto cek;}
        umur              : printf ("4.Umur                   : ");gets(umur);             if (c==1) {goto cek;}
        agama             : printf ("5.Agama                  : ");gets(agama);            if (c==1) {goto cek;}
        jenis_kelamin     : printf ("6.Jenis Kelamin          : ");gets(jenis_kelamin);    if (c==1) {goto cek;}
        negara            : printf ("7.Kewarganegaraan        : ");gets(negara);           if (c==1) {goto cek;}
        no_telpon         : printf ("8.No. Telpon             : ");gets(no_telpon);        if (c==1) {goto cek;}
        email             : printf ("9.E-mail                 : ");gets(email);            if (c==1) {goto cek;}
        sekolah_dasar     : printf ("10.Pendidikan SD/MI      : ");gets(sekolah_dasar);    if (c==1) {goto cek;}
        smp               : printf ("11.Pendidikan SMP        : ");gets(smp);              if (c==1) {goto cek;}
        sma               : printf ("12.Pendidikan SMA        : ");gets(sma);              if (c==1) {goto cek;}
        pendidikan_lanjut : printf ("13.Pendidikan Lanjut     : ");gets(pendidikan_lanjut);if (c==1) {goto cek;}
        riwayat_kerja1    : printf ("14.Pengalaman Kerja Ke-1 : ");gets(riwayat_kerja1);   if (c==1) {goto cek;}
        riwayat_kerja2    : printf ("15.Pengalaman Kerja Ke-2 : ");gets(riwayat_kerja2);   if (c==1) {goto cek;}
        riwayat_kerja3    : printf ("16.Pengalaman Kerja Ke-3 : ");gets(riwayat_kerja3);   if (c==1) {goto cek;}
        riwayat_kerja4    : printf ("17.Pengalaman Kerja Ke-4 : ");gets(riwayat_kerja4);   if (c==1) {goto cek;}
        riwayat_kerja5    : printf ("18.Pengalaman Kerja Ke-5 : ");gets(riwayat_kerja5);   if (c==1) {goto cek;}
        lokasi_buat       : printf ("19.Dibuat di (lokasi)    : ");gets(lokasi_buat);      if (c==1) {goto cek;}
        tanggal_buat      : printf ("20.Dibuat Pada Tanggal   : ");gets(tanggal_buat);     if (c==1) {goto cek;}

        char opsi;
        c=1;
        cek:
        printf ("===================================================================================================\n");
        printf ("\n\nApakah data yang Anda masukkan sudah benar? (y/t): ");scanf ("%c%*c",&opsi);
         if (opsi=='t')
            {
            int nomor;
            printf ("Bagian mana yang ingin diubah (input nomor)      : "); scanf ("%d%*c",&nomor);
            printf ("===================================================================================================\n");
            switch (nomor)
               {
                case 1  : goto nama;
                case 2  : goto ttl;
                case 3  : goto alamat;
                case 4  : goto umur;
                case 5  : goto agama;
                case 6  : goto jenis_kelamin;
                case 7  : goto negara;
                case 8  : goto no_telpon;
                case 9  : goto email;
                case 10 : goto sekolah_dasar;
                case 11 : goto smp;
                case 12 : goto sma;
                case 13 : goto pendidikan_lanjut;
                case 14 : goto riwayat_kerja1;
                case 15 : goto riwayat_kerja2;
                case 16 : goto riwayat_kerja3;
                case 17 : goto riwayat_kerja4;
                case 18 : goto riwayat_kerja5;
                case 19 : goto lokasi_buat;
                case 20 : goto tanggal_buat;

              }
            }
        else
        {
            printf ("Data Anda dikirim...\n");
        }


        printf ("\n===================================================================================================\n");
        printf ("\t\t\t\t\tDAFTAR RIWAYAT HIDUP\n");
        printf ("===================================================================================================\n");
        printf ("I. DATA PRIBADI\n\n");
        printf ("Nama                  : %s\n",nama);
        printf ("Tempat/Tanggal Lahir  : %s\n",ttl);
        printf ("Alamat                : %s\n",alamat);
        printf ("Umur                  : %s\n",umur);
        printf ("Agama                 : %s\n",agama);
        printf ("Jenis Kelamin         : %s\n",jenis_kelamin);
        printf ("Kewarganegaraan       : %s\n",negara);
        printf ("No. Telpon            : %s\n",no_telpon);
        printf ("E-mail                : %s\n\n",email);

        printf ("II. RIWAYAT PENDIDIKAN\n\n");
        printf ("Pendidikan SD/MI      : %s\n",sekolah_dasar);
        printf ("Pendidikan SMP        : %s\n",smp);
        printf ("Pendidikan SMA        : %s\n",sma);
        printf ("Pendidikan Lanjut     : %s\n\n",pendidikan_lanjut);

        printf ("III. PENGALAMAN KERJA\n\n");
        printf ("Pengalaman Kerja 1    : %s\n",riwayat_kerja1);
        printf ("Pengalaman Kerja 2    : %s\n",riwayat_kerja2);
        printf ("Pengalaman Kerja 3    : %s\n",riwayat_kerja3);
        printf ("Pengalaman Kerja 4    : %s\n",riwayat_kerja4);
        printf ("Pengalaman Kerja 5    : %s\n\n",riwayat_kerja5);

        printf ("Demikian Daftar Riwayat Hidup ini saya buat dengan data sebenarnya.\nAtas perhatian Bapak/Ibu, saya ucapkan terima kasih.\n\n\n");
        printf ("%s%s",lokasi_buat,tanggal_buat);
        printf ("\nHormat saya,\n\n\n\n");
        printf ("%s\n\n",nama);

        return 0;
}


//Fungsi Utama (Header)
int main()
{
    char pilihan [2][50]={"1.PEMBUATAN DAFTAR RIWAYAT HIDUP", "2.PEMBUATAN SURAT LAMARAN KERJA"};
    int menu;

        printf ("====================================================================================================\n");
        printf ("[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]\n");
        printf ("****************************************************************************************************\n");
        printf ("\n\tSELAMAT DATANG DI AREA PEMBUATAN DAFTAR RIWAYAT HIDUP & SURAT LAMARAN KERJA INSTAN\n\n");
        printf ("\t\t\t\t\t*KIOS BAROKAH WRITING*\n\n");
        printf ("\t\t\t\tPEMILIK : MOCHAMMAD VAIF DWI ALIFKHAN\n");
        printf ("\t\t\t\tNOMOR   : 202102011014\n");
        printf ("\t\t\t\tKOMPLEK : IA-INFORMATIKA\n\n");
        printf ("****************************************************************************************************\n");
        printf ("[][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][][]\n");
        printf ("====================================================================================================\n\n");
        printf ("\t\t\t\t\tKAMI MELAYANI: \n\n");
        for (int i=0;i<2;i++)
        {
        printf ("\t\t\t\t%s\n",pilihan[i]);
        }
        printf ("===================================================================================================\n\n");
        printf ("Masukkan Angka Menu Pilihan Anda 1/2: ");
        scanf  ("%d%*c", &menu);
        printf ("\nAnda memilih untuk membuat : \n%s secara online\n\n", pilihan [menu-1]);
        printf ("===================================================================================================\n\n");

        if (menu == 1)

        {
        drh_online();
        }
        else if (menu == 2)
        {
        slp_online();
        }
        else 
        {
            printf ("Maaf menu tidak tersedia!\n");
        }

    return 0;

}
