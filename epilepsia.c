#include	<stdio.h>
#include	<stdlib.h>
#include	<conio.h>
#include	<windows.h>

void configtela()//função q configura o tamanho da tela e do buffer
{
COORD outbuff;
outbuff.X = 150; // tem que ser 1 maior que o tamanho X
outbuff.Y = 55; // tem que ser 1 maior que o tamanho Y
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleScreenBufferSize(hConsole, outbuff);
Sleep(130);
SMALL_RECT windowSize = {0, 0, 60, 30};
SetConsoleWindowInfo(hConsole, TRUE, &windowSize);
}
     hue(){
    printf("B@BBB@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@BB \n");
    printf("@B@B@B@B@B@B@@@B@B@@@B@B@B@B@B@@@@@B@B@B@B@B@B@B@B@B@B@B@B@B \n");
    printf("B@@@B@B@B@B@B@B@B@@@@@B@B@B@B@B@B@B@B@B@B@B@B@B@B@@@B@B@B@@@ \n");
    printf("@B@B@B@@@@@B@B@B@@@@@@@B@@@@@B@B@@@@@B@B@B@@@B@B@B@B@B@B@B@B \n");
    printf("B@B@B@B@B@B@B@B@B@B@B@B@M@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@B@ \n");
    printf("BB@B@B@@@B@B@B@B@B@@@Bv     .7@B@@@B@B@@@B@B@B@@@B@B@B@B@B@B \n");
    printf("B@@@B@B@B@B@@@B@B@B@BU .::,,   ..,i1B@B@@@B@B@B@B@B@@@B@B@@@ \n");
    printf("@@@B@B@B@@@@@B@@@Bu,  .:::::::,..    ,i::.:1@B@B@B@B@B@B@B@B \n");
    printf("B@@@B@B@B@@@B@B@E    :i::::::::::::::  v5vr. F@@@@@@B@B@B@B@ \n");
    printf("@B@B@@@B@B@@@@@5        :::::::::::i. @B@@@Bu XB@B@B@B@B@B@@ \n");
    printf("B@B@B@B@B@B@B@u  LB@BBL  ,ii:::::::i X@@MqB@B :@B@B@@@B@@@@@ \n");
    printf("@B@B@B@B@B@@@q  7B@B@@@Bu ,:::::::i, :@B@B@BE @B@B@B@@@@@B@B \n");
    printf("B@B@@@B@B@B@B   1@B@@GX@@N  ,i::::i,  ,iv7Y.  u0B@B@B@B@B@B@ \n");
    printf("@B@B@@@B@@@@X i  B@B@B@B@L  :i::i::i:       .i   @@B@B@@@@@B \n");
    printf("B@B@B@B@B@k.  ii  75M@@u    ,ii..::: ,:, ,.. ,..  ,@B@B@B@@@ \n");
    printf("@B@B@B@B@F  :::i:        ::., :.iiiiri. ......,..   @B@B@@@B \n");
    printf("B@B@B@B@@   .i:::i.  ..:iriri..:.,,.  .... .::   :  7@B@B@B@ \n");
    printf("B@@B@B@B@  . .::::iri :r:.....,    .:::i     .. :   qB@B@B@B \n");
    printf("B@@@B@B@BP  . ,::ii. ::      ,i     :i:: 2@B0  GB@  B@@@@@B@ \n");
    printf("BB@B@@@B@@@i :i:i, .7:  :.     :jP87 :r OB@B@B,,@@@ 8B@B@B@B \n");
    printf("B@B@B@@@B@B@ ::i. ,7. ir L@@B ,@B@B@  . 5@B@MB@ 7@B :@B@B@B@ \n");
    printf("BB@B@B@@@@@B ,i. i7.  ;B B@B@LvB0M@Bj    B@B@B@, ii:@B@B@B@@ \n");
    printf("B@B@B@B@B@B@ :i ,r;    7 XB@BE @B@B@B    uB@Mi.:8@B@B@B@B@B@ \n");
    printf("@B@B@B@B@B@0 i: rr.       . .  .uX8NL        :B@@B@B@B@B@B@B \n");
    printf("B@B@@@B@@@@r r. r                           .@B@B@B@B@@@B@@@ \n");
    printf("BB@B@B@@@B@  i.::                            B@B@B@B@B@B@@@@ \n");
    printf("B@B@B@B@B@B. i:;, ,                        ,    i, rB@B@@@B@ \n");
    printf("@B@B@@@B@@@U :::i  ;. :r           .      .B@. kN @i7@@B@B@B \n");
    printf("B@B@B@@@B@B@  i::r  i:YM:8r .r   XB@B U@@@:@B@ @@7L: MB@B@B@ \n");
    printf("@B@@@@@B@B@BS  ,i:i     .O@ 8B@  M@B@7 @@B, Yi  :    :@B@B@B \n");
    printf("B@@@B@@@B@B@BM.  .i;:.     . ,::i.   . .r..:       ,u@@@B@B@ \n");
    printf("@@@B@B@B@B@@@B@Br   ,irii..    ..  .:::.       .vM@B@B@@@B@B \n");
    printf("B@B@@@B@@@B@@@@@B@G7     ..,,..            :jM@@B@B@@@B@B@B@ \n");
    printf("@B@B@B@B@B@B@B@B@B@B@0Lr7ri,.      ..iUk@B@@@B@B@B@B@@@B@B@@ \n");
    printf("B@B@@@B@B@B@@@B@B@B@B@B@B@B@B@@@@@@@@@@@B@B@B@B@@@B@B@B@B@@@ \n");

 }
int main(){
    int x = 4;
    configtela();
    while (x==4){
        system("cls"); // limpa a tela
        system("color 0B"); // cor de fundo preta e letras azuis brilhantes
        hue();
        Sleep(10);
        system ("cls"); // limpa a tela
        system ("color 4C"); // cor de fundo vermelha e letras vermelhas brilhantes
        hue();
		Sleep(10);
        system ("cls"); // limpa a tela
        system ("color 5D"); // cor de fundo roxa e letras lilases brilhantes
        hue();
		Sleep(10);
        system ("cls"); // limpa a tela
        system ("color 0E"); // cor de fundo preta e letras amarelas brilhantes
        hue();
        Sleep(10);
        system ("cls"); // limpa a tela
        system ("color 1B"); // cor de fundo azul e letras azuis claras
        hue();
        Sleep(10);
        system ("cls"); // limpa a tela
        system ("color 78");
        hue();
    }
}
