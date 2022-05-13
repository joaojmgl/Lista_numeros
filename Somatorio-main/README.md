 # Maxima soma 

## Proposta apresentada:
 -A proposta do exercicio é fazer uma lsita de numeros inteiros e indetifique a maxima soma possivel nesta lista, usando os conteitos de fila.

 ## Logica utilizada :
 1. Leitura e gravação do nomes encontrados no arquivos 
    - Primeiramente foi necessario a criação d eum arquivo txt com varios numeros.
    - Logo apos foi necessario utilizar uma funçao na ``` main.cpp ```     chamado ``` Read_arch ```.
    1.1 Onde a função recebe um arquivo **.txt** contendo os numeros a serem analisados pelo algoritmo.
    1.2 logo apos receber o arquivo a função abre o arquivo e le os dados que existem dentro do arquivo e grava eles em uma variavel auxiliar ` arq.open("Lista_numeros.txt"); ` *Abrindo o arquivo*. 
    1.3 Tambem foi necesario a tranformar os numeros do arquivo que estavam no tipo **string** para o tipo **int** com a utilizadçao desse trecho de codigo:
    ```c++
    aux.val = stoi(n);
    ```
    onde *n* é uma variavel onde foi salva as strings e "aux" onde foi salvo os inteiros.

    ```c++
    if(arq.is_open()){
		while(!arq.eof()){
			getline(arq, n);
			aux.val = stoi(n);
			LInsert(l, aux);
		}          
	}                     '*Leitura e gravação dos nomes dos arquivos*'
}		
          ```
          1.4 Note que a função `LInsert(l, aux);` foi chamada para inserir os valores na lista.
                '
    

     
 2. Apos isso ofoi criado uma função paara percorrer e somar o vetor para pode se achar a maxima soma no vetor.
   - Primeiramente criamos a função `Maxsum(&l);`.
   2.1 Onde foi criado dois lop's *for*, No priemiro travamos a posição inicial do loping a variavel **start**, Ja no segundo vetor somamos a posição de *j* a viariavel **soma**.
   ```c++
   for (i = start; i <= fim; i++) {
		soma = 0;
		for (j = i; j < fim; j++) {
			soma += l -> vet[j].val;
			
		...
    ```
   2.3  Em seguida criamos uma condiçao para que a fosse registrado apenas a maxima soma na variavel **maxsum**
   ```c++
    if (soma > maxsum && i != j) {
				maxsum = soma;
				posicao_inicial = i;
				posicao_final = j;
			}
   ```
 3. Por ultimo na **main.cpp** chamamos as variaveis:
   ```c++
  FLVazia(&l);
	Read_arch(&l);
	Maxsum(&l);
   ```
   Para que elas sejam executadas.

   ## Funcionamento 
   
 ### Funcionamento Makefile:
                                                                   
 |      Comandos       |        Função       |
 | ------------------- | ------------------- |
 |         Make        |  Compila o Programa |
 |       Make run      | Executa o algoritmo |
 
 ### Funcionamento Aquivo *"Numeros.txt"*:
 
 - O arquivo deve ser um aquivo txt.
 - Conter ate no maximo 100 numeros.
 - O numero devem ser escritos um numero por linha.Ex:
   ```
   80
   -60
   100
   -40
   ```
    