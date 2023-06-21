void arregloEscalar (float *arreglo, int medida, float escalar){
    for (int i =0; i < medida; i++){
        *arreglo = *arreglo +escalar;
        arreglo++;
    }
}