#include <mpi.h>

int main(){
    int id = 0, n_id = 0;

    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &id);
    MPI_Comm_size(MPI_COMM_WORLD, &n_id);

    return 0;
}