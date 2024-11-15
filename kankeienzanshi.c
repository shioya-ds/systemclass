#include <stdio.h>

int main(void)
{
    int EichiShibusawa, UmekoTuda, ShibasaburoKitasato;
    
    EichiShibusawa = 1840;
    UmekoTuda = 1864;
    ShibasaburoKitasato = 1853;
    
    if (EichiShibusawa == 1840)
       printf("Eichi Shibusawaは1840年生まれです\n");
    if (UmekoTuda != 1860)
       printf("Umeko Tudaは1860年生まれではありません\n");
    if (ShibasaburoKitasato > 1850)
       printf("Shibasaburo Kitasatoは1850年より後に生まれました\n");
    if (EichiShibusawa < UmekoTuda)
       printf("Umeko TudaはEichi Shibusawaよりも後に生まれました\n");
    if (UmekoTuda < ShibasaburoKitasato)
       printf("Shibasaburo KitasatoはUmeko Tudaよりも後に生まれました\n");


    return 0;
}