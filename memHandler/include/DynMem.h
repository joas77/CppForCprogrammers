#pragma once

class Header {
public:
    Header* lLink;      // left link
    Header* rLink;      // right link
    void** master;
    size_t size;        // block's bytes size
    Status tag;         // block's status
};

class Footer {
public:
    Header* uLink;      // upper link
    Status  tag;        // block's status
}

class DynMem {
protected:
    const maxHeap = 16384;  // 16K bytes
    const minWordSize = sizeof(int);
    const minEpsilon = sizeof(Header) + Sizeof(Footer) + 4;
    enum Status {vacant, used};
    char heap[maxHeap];
    size_t  wordSize;
    int epsilon;
    Header* freeList;

    Header* HeadOf(void* block);
    Footer* FootOf(Header& h);
    void* BlockOf(Header* h);
    Header* PrevHead(Header& h);
    Header* NextHead(Header& h);

    void InsertBlock(Header& h);
    void RemoveBlock(Header& h);

public:
    DynMem(int eps=minEpsilon, int wSize=minWordSize);

    void* NewPtr(int bytes);
    void FreePtr(void* ptr);

};
