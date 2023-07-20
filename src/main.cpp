#include <iostream>
#include <string>

#include "Mahasiswa.hpp"
#include "Kuesioner.hpp"
#include "FRS.hpp"
#include "Nilai.hpp"
#include "Jadwal_Kuliah.hpp"

using namespace std;

int main(int argc, char ** argv)
{
    Mahasiswa::Mahasiswa Mahasiswa;
    Mahasiswa.Nama = "Mahija Ibad Pradipta";
    Mahasiswa.NRP = "5024221026";
    Mahasiswa.Departemen= "Teknik komputer";
    Mahasiswa.Id_Mahasiswa = "22";
    Mahasiswa.Jenis_Kelamin = "Laki - Laki";
    Mahasiswa.Alamat = "Jl. Teknik Kimia, Keputih, Kec. Sukolilo, Surabaya, Jawa Timur 60111";
    Mahasiswa.Telepon = "012345678910";
    Mahasiswa.Semester = "2";
    Mahasiswa.Password = "Mahija1945";
    Mahasiswa.Tanggal_Lahir = "17-08-1945";

    cout << "Id              : " << Mahasiswa.Id_Mahasiswa << endl;
    cout << "Nama            : " << Mahasiswa.Nama << endl;
    cout << "NRP             : " << Mahasiswa.NRP << endl;
    cout << "Departemen      : " << Mahasiswa.Departemen << endl;
    cout << "Semester        : " << Mahasiswa.Semester << endl;
    cout << "Password        : " << Mahasiswa.Password << endl;
    cout << "Jenis Kelamin   : " << Mahasiswa.Jenis_Kelamin << endl;
    cout << "Alamat          : " << Mahasiswa.Alamat << endl;
    cout << "Telepon         : " << Mahasiswa.Telepon << endl;
    cout << "Tanggal Lahir   : " << Mahasiswa.Tanggal_Lahir<< endl;
    cout << "\n" << endl;

    Kuesioner::Kuesioner Kuesioner;
    Kuesioner.Mata_Kuliah = "Pemrograman Lanjut";
    Kuesioner.Nilai = "AB";
    Kuesioner.Kode_MK= "EC224201";
    Kuesioner.Dosen = "Reza Fuad Rachmadi, ST., MT., PhD.";
    Kuesioner.Kuesioner_MK = "Sudah";
    Kuesioner.Kuesioner_Dosen= "Sudah";
    Kuesioner.Semester = "2";

    cout << "Mata Kuliah     : " << Kuesioner.Mata_Kuliah << endl;
    cout << "Nilai           : " << Kuesioner.Nilai << endl;
    cout << "Kode_MK         : " << Kuesioner.Kode_MK << endl;
    cout << "Dosen           : " << Kuesioner.Dosen << endl;
    cout << "Kuesioner MK    : " << Kuesioner.Kuesioner_MK << endl;
    cout << "Kuesioner Dosen : " << Kuesioner.Kuesioner_Dosen << endl;
    cout << "Semester        : " << Kuesioner.Semester  << endl;
    cout << "\n" << endl;

    FRS::FRS FRS;
    FRS.Nama = "Mahija Ibad Pradipta";
    FRS.NRP = "5024221026";
    FRS.Kelas = "B";
    FRS.KRSM = "Cetak";
    FRS.IPS_IPK = "3,11";
    FRS.SKS = "18";
    FRS.Semester = "2";
    FRS.Tanggal_FRS = "31-01-2023";
    FRS.Mata_Kuliah = "Pemrograman Lanjut";
    FRS.Nilai = "AB";
    FRS.Kode_MK= "EC224201";
    FRS.Dosen = "Reza Fuad Rachmadi, ST., MT., PhD.";

    cout << "Nama            : " << FRS.Nama << endl;
    cout << "NRP             : " << FRS.NRP << endl;
    cout << "Kelas           : " << FRS.Kelas << endl;
    cout << "KRSM            : " << FRS.KRSM << endl;
    cout << "IPS/IPK         : " << FRS.IPS_IPK << endl;
    cout << "SKS             : " << FRS.SKS << endl;
    cout << "Semester        : " << FRS.Semester << endl;
    cout << "Tanggal FRS     : " << FRS.Tanggal_FRS << endl;    
    cout << "Mata Kuliah     : " << FRS.Mata_Kuliah << endl;
    cout << "Nilai           : " << FRS.Nilai << endl;
    cout << "Kode_MK         : " << FRS.Kode_MK << endl;
    cout << "Dosen           : " << FRS.Dosen << endl;
    cout << "\n" << endl;

    Nilai::Nilai Nilai;
    Nilai.Nama = "Mahija Ibad Pradipta";
    Nilai.NRP = "5024221026";
    Nilai.Kelas = "B";
    Nilai.IPS = "3,11";
    Nilai.SKS = "18";
    Nilai.Semester = "2";
    Nilai.Rata_Rata = "10,5";
    Nilai.Mata_Kuliah = "Pemrograman Lanjut";
    Nilai.Nilai = "AB";
    Nilai.Kode_MK= "EC224201";

    cout << "Nama            : " << Nilai.Nama << endl;
    cout << "NRP             : " << Nilai.NRP << endl;
    cout << "Kelas           : " << Nilai.Kelas << endl;
    cout << "IPS             : " << Nilai.IPS << endl;
    cout << "SKS             : " << Nilai.SKS << endl;
    cout << "Semester        : " << Nilai.Semester << endl;
    cout << "Rata Rata       : " << Nilai.Rata_Rata << endl;    
    cout << "Mata Kuliah     : " << Nilai.Mata_Kuliah << endl;
    cout << "Nilai           : " << Nilai.Nilai << endl;
    cout << "Kode_MK         : " << Nilai.Kode_MK << endl;
    cout << "\n" << endl;

    Jadwal_Kuliah::Jadwal_Kuliah Jadwal_Kuliah;
    Jadwal_Kuliah.Nama = "Mahija Ibad Pradipta";
    Jadwal_Kuliah.NRP = "5024221026";
    Jadwal_Kuliah.Kelas = "B";
    Jadwal_Kuliah.Mata_Kuliah = "Pemrograman Lanjut";
    Jadwal_Kuliah.Kode_MK= "EC224201";
    Jadwal_Kuliah.Semester = "2";
    Jadwal_Kuliah.Pukul = "10.00-12.50";
    Jadwal_Kuliah.Ruang = "A235";
    Jadwal_Kuliah.Hari = "Senin";

    cout << "Nama            : " << Jadwal_Kuliah.Nama << endl;
    cout << "NRP             : " << Jadwal_Kuliah.NRP << endl;
    cout << "Kelas           : " << Jadwal_Kuliah.Kelas << endl;
    cout << "Mata Kuliah     : " << Jadwal_Kuliah.Mata_Kuliah << endl;
    cout << "Kode_MK         : " << Jadwal_Kuliah.Kode_MK << endl;
    cout << "Semester        : " << Jadwal_Kuliah.Semester << endl;
    cout << "Pukul           : " << Jadwal_Kuliah.Pukul << endl;
    cout << "Ruang           : " << Jadwal_Kuliah.Ruang << endl;
    cout << "Hari            : " << Jadwal_Kuliah.Hari << endl;    
    cout << "\n" << endl;
    return 0;
    
}
