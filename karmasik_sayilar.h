/**
  ******************************************************************************
  * @file    karmasik_sayilar.h
  * @author  berk bolat
  * @version V1.0.0
  * @date    14-ocak-2015
  ******************************************************************************
  */


#ifndef KARMASIK_SAYILAR_
#define KARMASIK_SAYILAR_





/**
  ******************************************************************************
  * @brief  bu struct komplesk sayilar� tan�mlamak icin tanimlanmistir
  * @param  parametre olarak bir de�i�ken almaz
  ******************************************************************************
  */

typedef komplesk{
    double real;
    double imag;


};




/**
  ******************************************************************************
  * @brief  bu fonsiyon karmasik sayilarda toplama i�lemi i�in haz�rland�
  *         z1=a+ib  ve z2=c+id olarak girilen komplesk ifadeyi toplar
  * @param  z1=a+ib  ve z2=c+id olarak 2 parametre al�r
  ******************************************************************************
  */
komplesk komplesk_toplama(komplesk z1,komplesk z2){
komplesk sonuc;

sonuc.real=z1.real + z2.real;
sonuc.imag=z1.imag + z2.imag;

return sonuc;

}




/**
  ******************************************************************************
  * @brief  bu fonsiyon karmasik sayilarda c�karma i�lemi i�in haz�rland�
  *         z1=a+ib  ve z2=c+id olarak girilen komplesk ifadeyi c�kar�r
  * @param  z1=a+ib  ve z2=c+id olarak 2 parametre al�r
  ******************************************************************************
  */
komplesk komplesk_cikarma(komplesk z1,komplesk z2){
komplesk sonuc;

sonuc.real=z1.real - z2.real;
sonuc.imag=z1.imag - z2.imag;

return sonuc;

}


/**
  ******************************************************************************
  * @brief  bu fonsiyon karmasik sayilarda carpma i�lemi i�in haz�rland�
  *         z1=a+ib  ve z2=c+id olarak girilen komplesk ifadeyi carpar
  * @param  z1=a+ib  ve z2=c+id olarak 2 parametre al�r
  ******************************************************************************
  */
komplesk komplesk_carpma(komplesk z1,komplesk z2){
komplesk sonuc;

sonuc.real=(z1.real * z2.real) - (z1.imag * z2.imag);
sonuc.imag=(z1.imag * z2.real) + (z1.real * z2.imag);


return sonuc;

}




/**
  ******************************************************************************
  * @brief  bu fonsiyon karmasik sayilarda bolme i�lemi i�in haz�rland�
  *         z1=a+ib  ve z2=c+id olarak girilen komplesk ifadeyi bolme
  * @param  z1=a+ib  ve z2=c+id olarak 2 parametre al�r
  ******************************************************************************
  */
komplesk komplesk_bolme(komplesk z1,komplesk z2){
komplesk sonuc;

sonuc.real=((z1.real*z2.real) + (z1.imag*z2.imag)) / ((z2.real*z2.real)+(z2.imag*z2.imag));

sonuc.imag=((z1.imag*z2.real) - (z1.real*z2.imag)) / ((z2.real*z2.real)+(z2.imag*z2.imag));


return sonuc;

}


/**
  ******************************************************************************
  * @brief  bu fonsiyon karmasik sayilarda eslenik alma i�lemi i�in haz�rland�
  *         z1=a+ib olarak girilen ifadenin eslenigini al�r
  * @param  z1=a+ib olarak bir parametre al�r
  ******************************************************************************
  */
komplesk komplesk_eslenik(komplesk z1){
komplesk sonuc;

sonuc.real=z1.real;
sonuc.imag=z1.imag*(-1);


return sonuc;

}





#endif // KARMASIK_SAYILAR_
