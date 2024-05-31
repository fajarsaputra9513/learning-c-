#ifndef RAM_HPP
#define RAM_HPP

#include <iostream>
#include <string>
#include "Barang.hpp"

class Ram : public Barang {
private:
    int kapasitas;
    std::string jenisRam;

public:
    // Konstruktor
    Ram(std::string nama = "no name", int stokBarang = 0, int hargaBarang = 0, int kapasitas = 0, std::string jenisRam = "no name");

    // Setter
    void setKapasitas(int kapasitas);
    void setJenisRam(std::string jenisRam);

    // Getter
    int getKapasitas();
    std::string getJenisRam();

    // Fungsi cetak
    void cetakBarang();
};

#endif

