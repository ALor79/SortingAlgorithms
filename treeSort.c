

#include <stdlib.h>
typedef struct node{
    struct node *leftTree;
    struct node *rightTree;
    int val;
}node;

void addNode ( node **sr, int num )
{
    if ( *sr == NULL )
    {
        *sr = malloc ( sizeof ( node ) ) ;

        ( *sr ) -> leftTree = NULL ;
        ( *sr ) -> val = num ;
        ( *sr ) -> rightTree = NULL ;
    }
    else
    {
        if ( num < ( *sr ) -> val )
            addNode ( &( ( *sr ) -> leftTree ), num ) ;
        else
            addNode ( &( ( *sr ) -> rightTree ), num ) ;
    }
}
void inOrder ( node *subTree, int **array)
{
    if ( subTree != NULL )
    {
        inOrder ( subTree -> leftTree, array) ;
        **array = subTree -> val ;
        ++*array;
        inOrder ( subTree -> rightTree, array) ;
    } else
        return;
}
void deallocTree ( node *subTree)
{
    if ( subTree != NULL )
    {
        deallocTree ( subTree -> leftTree) ;
        free(subTree);
        deallocTree ( subTree -> rightTree) ;
    } else
        return;
}
void treeSort(int *array, int length)
{
    node *root = NULL;
    int i, *p = array;

    for ( i = 0 ; i < length ; i++ )
        addNode ( &root, array[i] ) ;

    inOrder ( root, &p) ;
    deallocTree(root);
}
