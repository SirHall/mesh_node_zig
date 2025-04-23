#include "heuristic.h"
#include "libpopcnt.h"

uint64_t mesh_node_heuristic_distance(uint64_t a, uint64_t b)
{
    uint64_t diff = a ^ b;
    uint64_t dist = popcnt64_bitwise(diff);
    return dist;
}