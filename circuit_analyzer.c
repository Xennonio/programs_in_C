#include <stdio.h>

int N;

double mod(double x){
	if(x<0) return -x;
  else return x;
}

void cof(long long int m[N][N], long long int t[N][N], int p, int q, int n){
  int i=0, j=0;
  for(int r=0; r<n; r++){
    for(int c=0; c<n; c++){
      if(r!=p && c!=q){
        t[i][j++]=m[r][c];
        if(j==n-1){
          j=0;
          i++;
        }
      }
    }
  }
}

long long det(long long int m[N][N], int n){
  long long int D=0;
  if(n==1) return m[0][0];
  long long int t[N][N], sign=1;
  for(int i=0; i<n; i++){
    cof(m, t, 0, i, n);
    D+=sign*m[0][i]*det(t, n-1);
    sign=-sign;
  }
  return D;
}

int main(){
    int re, m;
    printf("Digite o numero de resistores seguido da quantidade de malhas no circuito: ");
    scanf("%i %i", &re, &m);
    N=m;
    long long int d[m][m], r[3][re], v[m];
        for(int i=0; i<m; i++){
        for(int j=0; j<m; j++) d[i][j]=0;
        }
    for(int i=0; i<re; i++){
        printf("R%i, m1, m2: ", i+1);
        scanf("%lli %lli %lli", &r[0][i], &r[1][i], &r[2][i]);
    }
    for(int i=0; i<m; i++){
      printf("Vi%i: ", i+1);
      scanf("%lli", &v[i]);
    }
    for(int i=0; i<re; i++){
        if(r[1][i]!=r[2][i]){
          int a=r[1][i]-1, b=r[2][i]-1;
            d[a][b]+=r[0][i];
            d[a][a]+=r[0][i];
            d[b][a]+=r[0][i];
            d[b][b]+=r[0][i];
        }
        if(r[1][i]==r[2][i]){
          int a=r[1][i]-1;
          d[a][a]+=r[0][i];
        }
    }
    double D=det(d, N), a[m], g[m], current[re], voltage[re];
    for(int i=0; i<m; i++){
      for(int j=0; j<m; j++){
        g[j]=d[j][i];
        d[j][i]=v[j];
      }
      a[i]=det(d, N);
      for(int k=0; k<m; k++){
        d[k][i]=g[k];
      }
    }
    printf("\nCorrente:\n");
    for(int i=0; i<re; i++){
      if(r[1][i]==r[2][i]){
        int res=r[1][i]-1;
        current[i]=mod(a[res]/D);
        printf("IR%i = %lf mA\n", i+1, 1000*current[i]);
      }
      else{
        int a1=r[1][i]-1, a2=r[2][i]-1;
        current[i]=mod(mod(a[a1]/D)-mod(a[a2]/D));
        printf("IR%i = %lf mA\n", i+1, 1000*current[i]);
      }
    }
    printf("\nTensão:\n");
    for(int i=0; i<re; i++){
      voltage[i]=current[i]*r[0][i];
      printf("VR%i = %lf V\n", i+1, voltage[i]);
    }
}
