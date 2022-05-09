#include <iostream>
double ve_bo(int so_phien, double phan_tram_toi_da, double gia_hien_tai)
{
	double dRet = gia_hien_tai;
	while (so_phien > 0)
	{
		dRet = dRet * phan_tram_toi_da / 100.0 + dRet;
		so_phien--;
	}
	return dRet;
}

int so_phien_de_ve_bo(double gia_mua, double gia_hien_tai, double d_max_percent)
{
	int nRet = 0;
	while (std::round(ve_bo(nRet, d_max_percent, gia_hien_tai)) < std::round(gia_mua))
		nRet++;
	return nRet;
}

int main()
{
	int nSophienvebo = so_phien_de_ve_bo(8, 5.5, 14.29);
	int nSoTuan = std::ceil(std::ceil(nSophienvebo / 5.0));
	std::cout << nSophienvebo << "\n";
	return 0;
}