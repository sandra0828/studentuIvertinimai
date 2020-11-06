# Studentų įvertinimai v0.5
## Efektyvumo tyrimas programoje naudojant sąrašus

*Skliaustuose nurodomas programos laikas duomenis saugant į vektorių*

**FAILAS SU 1000 įrašų:**
*	Failo nuskaitymas užtruko: 0.0177189 s (0.0122615 s)
*	Studentų padalinimas į du sąrašus, panaikinant pradinį sąrašą, užtruko: 0.0008347 s (0.0004515 s)

**FAILAS SU 10000 įrašų:**
*	Failo nuskaitymas užtruko: 0.0899721 s (0.128827 s)
*	Studentų padalinimas į du sąrašus, panaikinant pradinį sąrašą, užtruko: 0.0035499 s (0.0070369 s)

**FAILAS SU 100000 įrašų:**
*	Failo nuskaitymas užtruko: 0.839907 s (1.10444 s)
*	Studentų padalinimas į du sąrašus, panaikinant pradinį sąrašą, užtruko: 0.0408279 s (0.0775521 s)

**FAILAS SU 1000000 įrašų:**
*	Failo nuskaitymas užtruko: 8.29954 s (9.04518 s)
*	Studentų padalinimas į du sąrašus, panaikinant pradinį sąrašą, užtruko: 0.513984 s (0.869812 s)

**FAILAS SU 10000000 įrašų:**
*	Failo nuskaitymas užtruko: 94.75 s (104.838 s)
*	Studentų padalinimas į du sąrašus, panaikinant pradinį sąrašą, užtruko: 6,412375 s (9,4681 s)

**Išvada: su mažesniais failais programa veikia greičiau naudojant vektorių, o su didesniais – naudojant sąrašą.**

*Testavimo sistemos parametrai: CPU – 1.99 GHz, RAM – 4,00 GB, SSD – 128 GB*
