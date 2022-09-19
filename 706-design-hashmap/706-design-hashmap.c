


typedef struct { int arr[1000001]; } MyHashMap;


MyHashMap* myHashMapCreate()
{
    MyHashMap *map = (MyHashMap *) malloc(sizeof(MyHashMap));
    memset(map->arr, -1, 1000001 * sizeof(int));
    return (map);
}

void myHashMapPut(MyHashMap* map, int key, int value) { map->arr[key] = value; }

int myHashMapGet(MyHashMap* map, int key) { return (map->arr[key]); }

void myHashMapRemove(MyHashMap* map, int key) { map->arr[key] = -1; }

void myHashMapFree(MyHashMap* map) { free(map); }

/**
 * Your MyHashMap struct will be instantiated and called as such:
 * MyHashMap* obj = myHashMapCreate();
 * myHashMapPut(obj, key, value);
 
 * int param_2 = myHashMapGet(obj, key);
 
 * myHashMapRemove(obj, key);
 
 * myHashMapFree(obj);
*/