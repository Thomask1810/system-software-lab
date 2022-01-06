#include <stdio.h>
#include <string.h>
#include <stdlib.h>

	struct directory {
   	         char dirName[10];
                 char fileName[10][10]; 
                 int fileCount;
                         } dir;

	void main()
	   {
    		int i, ch;
    		char tmp[10];
    		char tempFileName[10];
    		dir.fileCount = 0;
    		printf("Enter a directory name:");
    		scanf("%s", dir.dirName);

    while (1)
    {
        printf("\nOperations\n\n1.Create File\n2.Delete File\n3.Search in Directory\n4.View Files\n5.Exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch (ch) {

            case 1:
                printf("Enter the file name:\n");
                scanf("%s", tempFileName);
                
                for (i = 0; i < dir.fileCount; i++)
                {
                    if (strcmp(dir.fileName[i], tempFileName) == 0)
                    {
                        printf("File already exists\n");
                        break;
                    }
                }
                
                if(i == dir.fileCount)
                {
                    strcpy(dir.fileName[dir.fileCount++], tempFileName);
                    printf("File created successfully\n");
                }

                break;

            case 2:
                printf("Enter the name of the file:\n");
                scanf("%s", tmp);
                for (i = 0; i < dir.fileCount; ++i) {
                    if (strcmp(tmp, dir.fileName[i]) == 0) 
                    {                        
                        printf("The file %s is deleted!\n", tmp);                     
                        strcpy(dir.fileName[i], dir.fileName[dir.fileCount - 1]);   
                        dir.fileCount--;
                        break;
                    }
                }
                if (i == dir.fileCount) {
                    printf("404 | File Not Found\n");
                }
                break;

            case 3:
                printf("Enter the name of the file to be searched for:\n");
                scanf("%s", tmp);
                for (i = 0; i < dir.fileCount; ++i) {
                    if (strcmp(tmp, dir.fileName[i]) == 0) {
                        printf("File Found!!");
                        break;
                    }
                }
                if (i == dir.fileCount) {
                    printf("404 | File Not Found\n");
                }
                break;

            case 4:
                if (dir.fileCount == 0) {
                    printf("Empty Directory!!\n");
                }
                else {
                    printf("Files:\n");
                    for (i = 0; i < dir.fileCount; ++i)
                    {
                        printf("%s\n", dir.fileName[i]);
                    }
                    printf("Total %d files in directory", dir.fileCount);
                }
                break;

            default:
                exit(0);
        }
    }
}
             
            
            
             

