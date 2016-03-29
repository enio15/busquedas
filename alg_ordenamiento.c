/*Librería con todos los métodos de ordenamiento*/

void OrdenarMaximo(int *v, int n)
{
    int i;
    int ind, temp;
    for(i=0; i < n-1; i++) //n-1 pasadas
    {
      ind = Maximo(v, n-1-i);
      temp = v[n-1-i];
      v[n-1-i] = v[ind];
      v[ind]=temp;
      }
}
int Maximo(int *v, int n)
{
    int i, indMax;
    int max=-32768; //Mínimo entero
    for(i=0; i <= n;i++)
    {
      if(v[i]>max)
      {
        max = v[i];
        indMax = i;
      }
}
  return indMax;
}
