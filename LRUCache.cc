class LRUCache {
    class ListNode {
    public:
        ListNode(int v, int k) : val(v), key(k) {
            prev = NULL;
            next = NULL;
        }
        int val;
        int key;
        ListNode *next;
        ListNode *prev;
    };
public:    
    int c;
    ListNode *head;
    ListNode *tail;
    map<int, ListNode *> key_node_map;
    
    LRUCache(int capacity) : c(capacity) {
        head = NULL;
        tail = NULL;
    }
    
    int get(int key) {
        if (key_node_map.find(key) == key_node_map.end())
            return -1;
        else {
            int temp = key_node_map[key]->val;
            set(key, temp);
            return temp;
        }
    }
    void set(int key, int value) {
        if (key_node_map.find(key) == key_node_map.end()) {
          ListNode *n = new ListNode(value, key);
          key_node_map[key] = n;
          n->next = head;
          n->prev = NULL;
          if (head!=NULL) head->prev = n;
          if (!tail) tail = n;
          head = n;
          if (key_node_map.size() > c) {
              key_node_map.erase(tail->key);
              ListNode *temp = tail->prev;
              delete tail;
              if (temp) {
                  temp->next = NULL;
                  tail = temp;
              } else {
                  tail = NULL;
              }
          }
        } else {
            ListNode *n = key_node_map[key];
            n->val = value;
            if (n->prev != NULL)
                n->prev->next = n->next;
            if (n->next != NULL) 
                n->next->prev = n->prev ? n->prev : n;
            if (n->next == NULL)
                tail = n->prev ? n->prev : n;
            if (n->prev != NULL) {
                n->next = head;
                head->prev = n;
                n->prev = NULL;
                head = n;
            }
        }
    }
};