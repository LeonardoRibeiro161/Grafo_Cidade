#define Vertice int
typedef struct no No;

typedef struct noGrafo Lista;

No *cria(Vertice v1, No *p);

Lista *criaGrafo(Vertice v1, No *p, Lista *g);

void Inserir(Lista *g);

void percorrer(Lista *g);
