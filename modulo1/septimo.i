# 1 "septimo.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "septimo.c"
# 20 "septimo.c"
int main() {


 int i=0;
 int z[10] = {0, 1, 2, 3, 4};
 double f[10] = {9.34, 5.43, 2.34, 2.56, 0.001};

 for (i=0; i<10 ; i++){

  f[i] = (z[i]==0)? f[i] : f[i]/z[i] ;

 };
}
