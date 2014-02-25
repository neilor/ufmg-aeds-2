
void swap(int a[], int index1, int index2) { // Cenário: Index1 e Index2 são indíces válidos do vetor a[]
  int aux = a[index1];
  a[index1] = a[index2];
  a[index2] = aux;
}

int leftRootIndex(int index) {
  return (2 * index) + 1;
}

int rightRootIndex(int index) {
  return (2 * index) + 2;
}

int rootIndex(int index) {
  return (index - 1)/2;
}

void heapify(int a[], int index, int length) { // Cenário: i<n AND Esq. a[i] é um Heap AND Dir. a[i] é um Heap
  // Caso base: Se o maior elemento entre a raiz, raiz esq e raiz dir for a raiz, então já é um heap
  int leftIndex  = a[leftRootIndex(index)];
  int rightIndex = a[rightRootIndex(index)];
  int maxIndex;

  // Verificando se o valor da Raiz Esquerda é maior que a Raiz
  if(leftIndex < length && a[leftIndex] > a[index]) {
    maxIndex = a[leftIndex];
  } else {
    maxIndex = index;
  }

  // Verificando se o valor da Raiz Direita é maior que o Valor em maxIndex
  if(rightIndex < length && a[rightIndex] > a[index]) {
    maxIndex = rightIndex;
  }

  if(maxIndex != index) {
    swap(a, index, maxIndex);
    heapify(a, maxIndex, length);
  }
}

void buildHeap(int a[], int length) {
  for(int i = (length/2)-1; i >= 0; i--) { // ((length/2) - 1) porque se refere ao primeiro heap que possui sub arvores
    heapify(a, i, length);
  }
}

void heapSort(int a[], int length) {
  buildHeap(a, length);
  for(int i = length-1; i > 0; i--) {
    swap(a, 0, i);
    length--;
    heapify(a, 0, length);
  }
}
