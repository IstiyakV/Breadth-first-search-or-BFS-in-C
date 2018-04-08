#include<stdio.h>
int main(){

        int sizeOfNode = 5;
        int sizeOfEdge = 8;
        char startNode = 'A';
        char result[sizeOfNode];
        char visitedList[sizeOfNode][2]={{'A','T'},{'B','F'},{'C','F'},{'D','F'},{'E','F'}};
        char NodeEdgeLis[sizeOfEdge][2]={{'A','B'},{'A','E'},{'B','C'},{'C','E'},{'E','D'},{'E','B'},{'D','C'},{'D','B'}};

        printf("Node Edge List : \n");
        for(int i=0;i<sizeOfEdge;i++){

            for(int j=0;j<2;j++){
                printf("%c ",NodeEdgeLis[i][j]);
            }

            printf("\n");
        }


        printf("Visited List : \n");

         for(int i=0;i<sizeOfNode;i++){

            for(int j=0;j<2;j++){
                 printf("%c ",visitedList[i][j]);
            }


            printf("\n");
        }


        result[0]=startNode;

        /// main work


        int inserted=0;
        for(int i=0;i<sizeOfNode;i++){

            char tmp = result[i];

            printf("%c temp \n",tmp);


            for(int j=0;j<sizeOfEdge;j++){

                    if(NodeEdgeLis[j][0]==tmp){

                        for(int k=0;k<sizeOfNode;k++){

                            if(visitedList[k][0]==NodeEdgeLis[j][1]){
                                if(visitedList[k][1]=='F'){
                                        visitedList[k][1] = 'T';
                                        inserted =inserted+1;
                                    result[inserted]=NodeEdgeLis[j][1];
                                    printf("Result saved as %d index to %c \n",i+inserted,NodeEdgeLis[j][1]);

                                }
                            }
                        }
                    }
            }
        }

        printf("Visited List : \n");

         for(int i=0;i<sizeOfNode;i++){

            for(int j=0;j<2;j++){
                 printf("%c ",visitedList[i][j]);
            }


            printf("\n");
        }


        printf("\n");
        for(int i=0;i<sizeOfNode;i++){
            printf("%c ",result[i]);
        }





}

