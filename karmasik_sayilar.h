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
  * @brief  bu struct komplesk sayilarý tanýmlamak icin tanimlanmistir
  * @param  parametre olarak bir deðiþken almaz
  ******************************************************************************
  */

typedef komplesk{
    double real;
    double imag;


};




/**
  ******************************************************************************
  * @brief  bu fonsiyon karmasik sayilarda toplama iþlemi için hazýrlandý
  *         z1=a+ib  ve z2=c+id olarak girilen komplesk ifadeyi toplar
  * @param  z1=a+ib  ve z2=c+id olarak 2 parametre alýr
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
  * @brief  bu fonsiyon karmasik sayilarda cýkarma iþlemi için hazýrlandý
  *         z1=a+ib  ve z2=c+id olarak girilen komplesk ifadeyi cýkarýr
  * @param  z1=a+ib  ve z2=c+id olarak 2 parametre alýr
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
  * @brief  bu fonsiyon karmasik sayilarda carpma iþlemi için hazýrlandý
  *         z1=a+ib  ve z2=c+id olarak girilen komplesk ifadeyi carpar
  * @param  z1=a+ib  ve z2=c+id olarak 2 parametre alýr
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
  * @brief  bu fonsiyon karmasik sayilarda bolme iþlemi için hazýrlandý
  *         z1=a+ib  ve z2=c+id olarak girilen komplesk ifadeyi bolme
  * @param  z1=a+ib  ve z2=c+id olarak 2 parametre alýr
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
  * @brief  bu fonsiyon karmasik sayilarda eslenik alma iþlemi için hazýrlandý
  *         z1=a+ib olarak girilen ifadenin eslenigini alýr
  * @param  z1=a+ib olarak bir parametre alýr
  ******************************************************************************
  */
komplesk komplesk_eslenik(komplesk z1){
komplesk sonuc;

sonuc.real=z1.real;
sonuc.imag=z1.imag*(-1);


return sonuc;

}





#endif // KARMASIK_SAYILAR_
