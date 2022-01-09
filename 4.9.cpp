//int TMP(int Value, int System) { // перевод числа в любую сс
// int a = Value, tmp = 0, b;
// while (a > System - 1)
// {
// b = a % System;
// tmp++;
// a /= System;
// }
// tmp++;
// return tmp;
//}
//int SysConTo10(char str[], int sys) { // перевод любого числа в десятичную сс
// float k, res = 0, st = 0, tmp = strlen(str);
// for (int i = tmp - 1; i >= 0; i--) {
// switch (str[i]) {
// case 'a': k = 10;
// break;
// case 'b': k = 11;
// break;
// case 'c': k = 12;
// break;
// case 'd': k = 13;
// break;
// case 'e': k = 14;
// break;
// case 'f': k = 15;
// break;
// case 'g': k = 16;
// break;
// case 'h': k = 17;
// break;
// case 'i': k = 18;
// break;
// case 'j': k = 19;
// break;
// case 'k': k = 20;
// break;
// case 'l': k = 21;
// break;
// case 'm': k = 22;
// break;
// case 'n': k = 23;
// break;
// case 'o': k = 24;
// break;
// case 'p': k = 25;
// break;
// case 'q': k = 26;
// break;
// case 'r': k = 27;
// break;
// case 's': k = 28;
// break;
// case 't': k = 29;
// break;
// case 'u': k = 30;
// break;
// case 'v': k = 31;
// break;
// case 'w': k = 32;
// break;
// case 'x': k = 33;
// break;
// case 'y': k = 34;
// break;
// case 'z': k = 35;
// break;
//
// default: k = (int)str[i];
// break;
// }
// if (k >= 48) {
// k -= 48;
// }
// if (k >= sys) {
// cout « "Число " « k « " не может находиться в данной системе счисления.\n";
// break;
// return 0;
// }
// else if (k != sys) {
// res += pow(sys, st) * k;
// st++;
// }
// }
// return res;
//}
//void main()
//{
// setlocale(LC_CTYPE, "rus");
// int m, res = 0, st = 0;
// char val[100] = " ";
// cout « "Введите число: "; gets_s(val);
// cout « "Введите основание системы счисления: ";
// cin » m;
// res = SysConTo10(val, m);
// int m2 = 0;
// cout « "Введите целевую систему счисления: " « endl;
// cin » m2;
// int tmp2 = TMP(res, m2);
// for (int i = 0; i < tmp2; i++) {
// int b = res % m2;
// switch (b)
// {
// case 10: {
// val[i] = 'a';
//
res /= m2;
// }
// break;
// case 11: {
// val[i] = 'b';
// res /= m2;
// }
// break;
// case 12: {
// val[i] = 'c';
// res /= m2;
// }
// break;
// case 13: {
// val[i] = 'd';
// res /= m2;
// }
// break;
// case 14: {
// val[i] = 'e';
// res /= m2;
// }
// break;
// case 15: {
// val[i] = 'f';
// res /= m2;
// }
// break;
// case 16: {
// val[i] = 'g';
// res /= m2;
// }
// case 17: {
// val[i] = 'h';
// res /= m2;
// }
// case 18: {
// val[i] = 'i';
// res /= m2;
// }
// case 19: {
// val[i] = 'j';
// res /= m2;
// }
// case 20: {
// val[i] = 'k';
// res /= m2;
// }
// case 21: {
// val[i] = 'l';
// res /= m2;
// }
// case 22: {
// val[i] = 'm';
// res /= m2;
// }
// case 23: {
// val[i] = 'n';
// res /= m2;
// }
// case 24: {
// val[i] = 'o';
// res /= m2;
// }
// case 25: {
// val[i] = 'p';
// res /= m2;
// }
// case 26: {
// val[i] = 'q';
// res /= m2;
// }
// case 27: {
// val[i] = 'r';
// res /= m2;
// }
// case 28: {
// val[i] = 's';
// res /= m2;
// }
// case 29: {
// val[i] = 't';
// res /= m2;
// }
// case 30: {
// val[i] = 'u';
// res /= m2;
// }
// case 31: {
// val[i] = 'v';
// res /= m2;
// }
// case 32: {
// val[i] = 'w';
// res /= m2;
// }
// case 33: {
// val[i] = 'x';
// res /= m2;
// }
// case 34: {
// val[i] = 'y';
// res /= m2;
// }
// case 35: {
// val[i] = 'z';
// res /= m2;
// }
// default: {
// if (b < 48) {
// b += 48;
// }
// val[i] = b;
// res /= m2;
// }
// break;
// }
// }
// for (int i = tmp2 - 1; i > -1; i--)
// cout « val[i];
// cout « endl;
//}