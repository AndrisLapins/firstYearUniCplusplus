/*************************
Autors: Andris Lapins
Izveidots: 02/05/2019
*********************/
#include <iostream>
#include <fstream>
using namespace std;

struct a
{
    char dataA[256];
    a *prevA;
    a *nextA;
    int lengthA = 0;
};
    int lenA = 0;
    a *topA=NULL;
    a *startA=NULL;
    a *tempA;
struct b
{
    char dataB[256];
    b *prevB;
    b *nextB;
    int lengthB = 0;
};
    int lenB = 0;
    b *topB=NULL;
    b *startB=NULL;
    b *tempB;
struct c
{
    char dataC[256];
    c *prevC;
    c *nextC;
    int lengthC = 0;
};
    int lenC = 0;
    c *topC=NULL;
    c *startC=NULL;
    c *tempC;
struct d
{
    char dataD[256];
    d *prevD;
    d *nextD;
    int lengthD = 0;
};
    int lenD = 0;
    d *topD=NULL;
    d *startD=NULL;
    d *tempD;
struct e
{
    char dataE[256];
    e *prevE;
    e *nextE;
    int lengthE = 0;
};
    int lenE = 0;
    e *topE=NULL;
    e *startE=NULL;
    e *tempE;
struct f
{
    char dataF[256];
    f *prevF;
    f *nextF;
    int lengthF = 0;
};
    int lenF = 0;
    f *topF=NULL;
    f *startF=NULL;
    f *tempF;
struct g
{
    char dataG[256];
    g *prevG;
    g *nextG;
    int lengthG = 0;
};
    int lenG = 0;
    g *topG=NULL;
    g *startG=NULL;
    g *tempG;
struct h
{
    char dataH[256];
    h *prevH;
    h *nextH;
    int lengthH = 0;
};
    int lenH = 0;
    h *topH=NULL;
    h *startH=NULL;
    h *tempH;
struct i
{
    char dataI[256];
    i *prevI;
    i *nextI;
    int lengthI = 0;
};
    int lenI = 0;
    i *topI=NULL;
    i *startI=NULL;
    i *tempI;
struct j
{
    char dataJ[256];
    j *prevJ;
    j *nextJ;
    int lengthJ = 0;
};
    int lenJ = 0;
    j *topJ=NULL;
    j *startJ=NULL;
    j *tempJ;
struct k
{
    char dataK[256];
    k *prevK;
    k *nextK;
    int lengthK = 0;
};
    int lenK = 0;
    k *topK=NULL;
    k *startK=NULL;
    k *tempK;
struct l
{
    char dataL[256];
    l *prevL;
    l *nextL;
    int lengthL = 0;
};
    int lenL = 0;
    l *topL=NULL;
    l *startL=NULL;
    l *tempL;
struct m
{
    char dataM[256];
    m *prevM;
    m *nextM;
    int lengthM = 0;
};
    int lenM = 0;
    m *topM=NULL;
    m *startM=NULL;
    m *tempM;
struct n
{
    char dataN[256];
    n *prevN;
    n *nextN;
    int lengthN = 0;
};
    int lenN = 0;
    n *topN=NULL;
    n *startN=NULL;
    n *tempN;
struct o
{
    char dataO[256];
    o *prevO;
    o *nextO;
    int lengthO = 0;
};
    int lenO = 0;
    o *topO=NULL;
    o *startO=NULL;
    o *tempO;
struct p
{
    char dataP[256];
    p *prevP;
    p *nextP;
    int lengthP = 0;
};
    int lenP = 0;
    p *topP=NULL;
    p *startP=NULL;
    p *tempP;
struct q
{
    char dataQ[256];
    q *prevQ;
    q *nextQ;
    int lengthQ = 0;
};
    int lenQ = 0;
    q *topQ=NULL;
    q *startQ=NULL;
    q *tempQ;
struct r
{
    char dataR[256];
    r *prevR;
    r *nextR;
    int lengthR = 0;
};
    int lenR = 0;
    r *topR=NULL;
    r *startR=NULL;
    r *tempR;
struct s
{
    char dataS[256];
    s *prevS;
    s *nextS;
    int lengthS = 0;
};
    int lenS = 0;
    s *topS=NULL;
    s *startS=NULL;
    s *tempS;
struct t
{
    char dataT[256];
    t *prevT;
    t *nextT;
    int lengthT = 0;
};
    int lenT = 0;
    t *topT=NULL;
    t *startT=NULL;
    t *tempT;
struct u
{
    char dataU[256];
    u *prevU;
    u *nextU;
    int lengthU = 0;
};
    int lenU = 0;
    u *topU=NULL;
    u *startU=NULL;
    u *tempU;
struct v
{
    char dataV[256];
    v *prevV;
    v *nextV;
    int lengthV = 0;
};
    int lenV = 0;
    v *topV=NULL;
    v *startV=NULL;
    v *tempV;
struct w
{
    char dataW[256];
    w *prevW;
    w *nextW;
    int lengthW = 0;
};
    int lenW = 0;
    w *topW=NULL;
    w *startW=NULL;
    w *tempW;
struct x
{
    char dataX[256];
    x *prevX;
    x *nextX;
    int lengthX = 0;
};
    int lenX = 0;
    x *topX=NULL;
    x *startX=NULL;
    x *tempX;
struct y
{
    char dataY[256];
    y *prevY;
    y *nextY;
    int lengthY = 0;
};
    int lenY = 0;
    y *topY=NULL;
    y *startY=NULL;
    y *tempY;
struct z
{
    char dataZ[256];
    z *prevZ;
    z *nextZ;
    int lengthZ = 0;
};
    int lenZ = 0;
    z *topZ=NULL;
    z *startZ=NULL;
    z *tempZ;

///Variables to control the action of the program
int flag = 0; /// if flag=0, than print 'nothing'
char flagLetter; /// saving the first letter of a word
char my_character; /// the character in the buffer
int startBit = 0; /// state when the character cheking just started

int main() {
    ifstream fin;
    fin.open("paldies.in");

    while (!fin.eof()) {
        if (startBit == 0) {
            fin.get(my_character);
            startBit = 1;
        }
        if (my_character == ' ') {
            fin.get(my_character);
        } else if (my_character == '\n') {
            ///ignore
        } else {
            flagLetter = my_character;
        ///determening the letter
            if(flagLetter == 'a' || flagLetter == 'A') {
                a*p = new a;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataA[i] = my_character;
                    p->lengthA++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextA = NULL;
                if (startA == NULL) {
                    p->prevA=NULL;
                    startA = p;
                    topA = p;
                } else {
                    tempA = topA;
                    topA->nextA = p;
                    topA = p;
                    topA->prevA = tempA;
                }
                lenA++;
                flag = 1;
            }
            if(flagLetter == 'b' || flagLetter == 'B') {
                b*p = new b;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataB[i] = my_character;
                    p->lengthB++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextB = NULL;
                if (startB == NULL) {
                    p->prevB=NULL;
                    startB = p;
                    topB = p;
                } else {
                    tempB = topB;
                    topB->nextB = p;
                    topB = p;
                    topB->prevB = tempB;
                }
                lenB++;
                flag = 1;
            }
            if(flagLetter == 'c' || flagLetter == 'C') {
                c*p = new c;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataC[i] = my_character;
                    p->lengthC++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextC = NULL;
                if (startC == NULL) {
                    p->prevC=NULL;
                    startC = p;
                    topC = p;
                } else {
                    tempC = topC;
                    topC->nextC = p;
                    topC = p;
                    topC->prevC = tempC;
                }
                lenC++;
                flag = 1;
            }
            if(flagLetter == 'd' || flagLetter == 'D') {
                d*p = new d;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataD[i] = my_character;
                    p->lengthD++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextD = NULL;
                if (startD == NULL) {
                    p->prevD=NULL;
                    startD = p;
                    topD = p;
                } else {
                    tempD = topD;
                    topD->nextD = p;
                    topD = p;
                    topD->prevD = tempD;
                }
                lenD++;
                flag = 1;
            }
            if(flagLetter == 'e' || flagLetter == 'E') {
                e*p = new e;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataE[i] = my_character;
                    p->lengthE++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextE = NULL;
                if (startE == NULL) {
                    p->prevE=NULL;
                    startE = p;
                    topE = p;
                } else {
                    tempE = topE;
                    topE->nextE = p;
                    topE = p;
                    topE->prevE = tempE;
                }
                lenE++;
                flag = 1;
            }
            if(flagLetter == 'f' || flagLetter == 'F') {
                f*p = new f;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataF[i] = my_character;
                    p->lengthF++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextF = NULL;
                if (startF == NULL) {
                    p->prevF=NULL;
                    startF = p;
                    topF = p;
                } else {
                    tempF = topF;
                    topF->nextF = p;
                    topF = p;
                    topF->prevF = tempF;
                }
                lenF++;
                flag = 1;
            }
            if(flagLetter == 'g' || flagLetter == 'G') {
                g*p = new g;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataG[i] = my_character;
                    p->lengthG++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextG = NULL;
                if (startG == NULL) {
                    p->prevG=NULL;
                    startG = p;
                    topG = p;
                } else {
                    tempG = topG;
                    topG->nextG = p;
                    topG = p;
                    topG->prevG = tempG;
                }
                lenG++;
                flag = 1;
            }
            if(flagLetter == 'h' || flagLetter == 'H') {
                h*p = new h;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataH[i] = my_character;
                    p->lengthH++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextH = NULL;
                if (startH == NULL) {
                    p->prevH=NULL;
                    startH = p;
                    topH = p;
                } else {
                    tempH = topH;
                    topH->nextH = p;
                    topH = p;
                    topH->prevH = tempH;
                }
                lenH++;
                flag = 1;
            }
            if(flagLetter == 'i' || flagLetter == 'I') {
                i*p = new i;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataI[i] = my_character;
                    p->lengthI++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextI = NULL;
                if (startI == NULL) {
                    p->prevI=NULL;
                    startI = p;
                    topI = p;
                } else {
                    tempI = topI;
                    topI->nextI = p;
                    topI = p;
                    topI->prevI = tempI;
                }
                lenI++;
                flag = 1;
            }
            if(flagLetter == 'j' || flagLetter == 'J') {
                j*p = new j;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataJ[i] = my_character;
                    p->lengthJ++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextJ = NULL;
                if (startJ == NULL) {
                    p->prevJ=NULL;
                    startJ = p;
                    topJ = p;
                } else {
                    tempJ = topJ;
                    topJ->nextJ = p;
                    topJ = p;
                    topJ->prevJ = tempJ;
                }
                lenJ++;
                flag = 1;
            }
            if(flagLetter == 'k' || flagLetter == 'K') {
                k*p = new k;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataK[i] = my_character;
                    p->lengthK++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextK = NULL;
                if (startK == NULL) {
                    p->prevK=NULL;
                    startK = p;
                    topK = p;
                } else {
                    tempK = topK;
                    topK->nextK = p;
                    topK = p;
                    topK->prevK = tempK;
                }
                lenK++;
                flag = 1;
            }
            if(flagLetter == 'l' || flagLetter == 'L') {
                l*p = new l;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataL[i] = my_character;
                    p->lengthL++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextL = NULL;
                if (startL == NULL) {
                    p->prevL=NULL;
                    startL = p;
                    topL = p;
                } else {
                    tempL = topL;
                    topL->nextL = p;
                    topL = p;
                    topL->prevL = tempL;
                }
                lenL++;
                flag = 1;
            }
            if(flagLetter == 'm' || flagLetter == 'M') {
                m*p = new m;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataM[i] = my_character;
                    p->lengthM++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextM = NULL;
                if (startM == NULL) {
                    p->prevM=NULL;
                    startM = p;
                    topM = p;
                } else {
                    tempM = topM;
                    topM->nextM = p;
                    topM = p;
                    topM->prevM = tempM;
                }
                lenM++;
                flag = 1;
            }
            if(flagLetter == 'n' || flagLetter == 'N') {
                n*p = new n;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataN[i] = my_character;
                    p->lengthN++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextN = NULL;
                if (startN == NULL) {
                    p->prevN=NULL;
                    startN = p;
                    topN = p;
                } else {
                    tempN = topN;
                    topN->nextN = p;
                    topN = p;
                    topN->prevN = tempN;
                }
                lenN++;
                flag = 1;
            }
            if(flagLetter == 'o' || flagLetter == 'O') {
                o*p = new o;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataO[i] = my_character;
                    p->lengthO++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextO = NULL;
                if (startO == NULL) {
                    p->prevO=NULL;
                    startO = p;
                    topO = p;
                } else {
                    tempO = topO;
                    topO->nextO = p;
                    topO = p;
                    topO->prevO = tempO;
                }
                lenO++;
                flag = 1;
            }
            if(flagLetter == 'p' || flagLetter == 'P') {
                p*pp = new p;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    pp->dataP[i] = my_character;
                    pp->lengthP++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                pp->nextP = NULL;
                if (startP == NULL) {
                    pp->prevP=NULL;
                    startP = pp;
                    topP = pp;
                } else {
                    tempP = topP;
                    topP->nextP = pp;
                    topP = pp;
                    topP->prevP = tempP;
                }
                lenP++;
                flag = 1;
            }
            if(flagLetter == 'q' || flagLetter == 'Q') {
                q*p = new q;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataQ[i] = my_character;
                    p->lengthQ++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextQ = NULL;
                if (startQ == NULL) {
                    p->prevQ=NULL;
                    startQ = p;
                    topQ = p;
                } else {
                    tempQ = topQ;
                    topQ->nextQ = p;
                    topQ = p;
                    topQ->prevQ = tempQ;
                }
                lenQ++;
                flag = 1;
            }
            if(flagLetter == 'r' || flagLetter == 'R') {
                r*p = new r;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataR[i] = my_character;
                    p->lengthR++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextR = NULL;
                if (startR == NULL) {
                    p->prevR=NULL;
                    startR = p;
                    topR = p;
                } else {
                    tempR = topR;
                    topR->nextR = p;
                    topR = p;
                    topR->prevR = tempR;
                }
                lenR++;
                flag = 1;
            }
            if(flagLetter == 's' || flagLetter == 'S') {
               s*p = new s;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataS[i] = my_character;
                    p->lengthS++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextS = NULL;
                if (startS == NULL) {
                    p->prevS=NULL;
                    startS = p;
                    topS = p;
                } else {
                    tempS = topS;
                    topS->nextS = p;
                    topS = p;
                    topS->prevS = tempS;
                }
                lenS++;
                flag = 1;
            }
            if(flagLetter == 't' || flagLetter == 'T') {
                t*p = new t;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataT[i] = my_character;
                    p->lengthT++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextT = NULL;
                if (startT == NULL) {
                    p->prevT=NULL;
                    startT = p;
                    topT = p;
                } else {
                    tempT = topT;
                    topT->nextT = p;
                    topT = p;
                    topT->prevT = tempT;
                }
                lenT++;
                flag = 1;
            }
            if(flagLetter == 'u' || flagLetter == 'U') {
                u*p = new u;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataU[i] = my_character;
                    p->lengthU++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextU = NULL;
                if (startU == NULL) {
                    p->prevU=NULL;
                    startU = p;
                    topU = p;
                } else {
                    tempU = topU;
                    topU->nextU = p;
                    topU = p;
                    topU->prevU = tempU;
                }
                lenU++;
                flag = 1;
            }
            if(flagLetter == 'v' || flagLetter == 'V') {
                v*p = new v;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataV[i] = my_character;
                    p->lengthV++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextV = NULL;
                if (startV == NULL) {
                    p->prevV=NULL;
                    startV = p;
                    topV = p;
                } else {
                    tempV = topV;
                    topV->nextV = p;
                    topV = p;
                    topV->prevV = tempV;
                }
                lenV++;
                flag = 1;
            }
            if(flagLetter == 'w' || flagLetter == 'W') {
                w*p = new w;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataW[i] = my_character;
                    p->lengthW++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextW = NULL;
                if (startW == NULL) {
                    p->prevW=NULL;
                    startW = p;
                    topW = p;
                } else {
                    tempW = topW;
                    topW->nextW = p;
                    topW = p;
                    topW->prevW = tempW;
                }
                lenW++;
                flag = 1;
            }
            if(flagLetter == 'x' || flagLetter == 'X') {
                x*p = new x;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataX[i] = my_character;
                    p->lengthX++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextX = NULL;
                if (startX == NULL) {
                    p->prevX=NULL;
                    startX = p;
                    topX = p;
                } else {
                    tempX = topX;
                    topX->nextX = p;
                    topX = p;
                    topX->prevX = tempX;
                }
                lenX++;
                flag = 1;
            }
            if(flagLetter == 'y' || flagLetter == 'Y') {
                y*p = new y;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataY[i] = my_character;
                    p->lengthY++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextY = NULL;
                if (startY == NULL) {
                    p->prevY=NULL;
                    startY = p;
                    topY = p;
                } else {
                    tempY = topY;
                    topY->nextY = p;
                    topY = p;
                    topY->prevY = tempY;
                }
                lenY++;
                flag = 1;
            }
            if(flagLetter == 'z' || flagLetter == 'Z') {
                z*p = new z;
                for (int i = 0; my_character != ' ' && !fin.eof() && my_character != '\n' ; i++) {
                    p->dataZ[i] = my_character;
                    p->lengthZ++;
                    fin.get(my_character);
                }
                flagLetter = '#';
                p->nextZ = NULL;
                if (startZ == NULL) {
                    p->prevZ=NULL;
                    startZ = p;
                    topZ = p;
                } else {
                    tempZ = topZ;
                    topZ->nextZ = p;
                    topZ = p;
                    topZ->prevZ = tempZ;
                }
                lenZ++;
                flag = 1;
            }
        }
    }

    /// outputing words in a file
    ofstream fout;
    fout.open("paldies.out");
    if (flag == 1) {
        a*pa = new a;
        pa = topA;
        while(pa != NULL) {
            for(int i = 0; i < pa->lengthA ; i++) {
                fout << pa->dataA[i];
            }
            fout << ' ';
            pa = pa->prevA;
        }
        b*pb = new b;
        pb = topB;
        while(pb != NULL) {
            for(int i = 0; i < pb->lengthB ; i++) {
                fout << pb->dataB[i];
            }
            fout << ' ';
            pb = pb->prevB;
        }
        c*pc = new c;
        pc = topC;
        while(pc != NULL) {
            for(int i = 0; i < pc->lengthC ; i++) {
                fout << pc->dataC[i];
            }
            fout << ' ';
            pc = pc->prevC;
        }
        d*pd = new d;
        pd = topD;
        while(pd != NULL) {
            for(int i = 0; i < pd->lengthD ; i++) {
                fout << pd->dataD[i];
            }
            fout << ' ';
            pd = pd->prevD;
        }
        e*pe = new e;
        pe = topE;
        while(pe != NULL) {
            for(int i = 0; i < pe->lengthE ; i++) {
                fout << pe->dataE[i];
            }
            fout << ' ';
            pe = pe->prevE;
        }
        f*pf = new f;
        pf = topF;
        while(pf != NULL) {
            for(int i = 0; i < pf->lengthF ; i++) {
                fout << pf->dataF[i];
            }
            fout << ' ';
            pf = pf->prevF;
        }
        g*pg = new g;
        pg = topG;
        while(pg != NULL) {
            for(int i = 0; i < pg->lengthG ; i++) {
                fout << pg->dataG[i];
            }
            fout << ' ';
            pg = pg->prevG;
        }
        h*ph = new h;
        ph = topH;
        while(ph != NULL) {
            for(int i = 0; i < ph->lengthH ; i++) {
                fout << ph->dataH[i];
            }
            fout << ' ';
            ph = ph->prevH;
        }
        i*pi = new i;
        pi = topI;
        while(pi != NULL) {
            for(int i = 0; i < pi->lengthI ; i++) {
                fout << pi->dataI[i];
            }
            fout << ' ';
            pi = pi->prevI;
        }
        j*pj = new j;
        pj = topJ;
        while(pj != NULL) {
            for(int i = 0; i < pj->lengthJ ; i++) {
                fout << pj->dataJ[i];
            }
            fout << ' ';
            pj = pj->prevJ;
        }
        k*pk = new k;
        pk = topK;
        while(pk != NULL) {
            for(int i = 0; i < pk->lengthK ; i++) {
                fout << pk->dataK[i];
            }
            fout << ' ';
            pk = pk->prevK;
        }
        l*pl = new l;
        pl = topL;
        while(pl != NULL) {
            for(int i = 0; i < pl->lengthL ; i++) {
                fout << pl->dataL[i];
            }
            fout << ' ';
            pl = pl->prevL;
        }
        m*pm = new m;
        pm = topM;
        while(pm != NULL) {
            for(int i = 0; i < pm->lengthM ; i++) {
                fout << pm->dataM[i];
            }
            fout << ' ';
            pm = pm->prevM;
        }
        n*pn = new n;
        pn = topN;
        while(pn != NULL) {
            for(int i = 0; i < pn->lengthN ; i++) {
                fout << pn->dataN[i];
            }
            fout << ' ';
            pn = pn->prevN;
        }
        o*po = new o;
        po = topO;
        while(po != NULL) {
            for(int i = 0; i < po->lengthO ; i++) {
                fout << po->dataO[i];
            }
            fout << ' ';
            po = po->prevO;
        }
        p*pp = new p;
        pp = topP;
        while(pp != NULL) {
            for(int i = 0; i < pp->lengthP ; i++) {
                fout << pp->dataP[i];
            }
            fout << ' ';
            pp = pp->prevP;
        }
        q*pq = new q;
        pq = topQ;
        while(pq != NULL) {
            for(int i = 0; i < pq->lengthQ ; i++) {
                fout << pq->dataQ[i];
            }
            fout << ' ';
            pq = pq->prevQ;
        }
        r*pr = new r;
        pr = topR;
        while(pr != NULL) {
            for(int i = 0; i < pr->lengthR ; i++) {
                fout << pr->dataR[i];
            }
            fout << ' ';
            pr = pr->prevR;
        }
        s*ps = new s;
        ps = topS;
        while(ps != NULL) {
            for(int i = 0; i < ps->lengthS ; i++) {
                fout << ps->dataS[i];
            }
            fout << ' ';
            ps = ps->prevS;
        }
        t*pt = new t;
        pt = topT;
        while(pt != NULL) {
            for(int i = 0; i < pt->lengthT ; i++) {
                fout << pt->dataT[i];
            }
            fout << ' ';
            pt = pt->prevT;
        }
        u*pu = new u;
        pu = topU;
        while(pu != NULL) {
            for(int i = 0; i < pu->lengthU ; i++) {
                fout << pu->dataU[i];
            }
            fout << ' ';
            pu = pu->prevU;
        }
        v*pv = new v;
        pv = topV;
        while(pv != NULL) {
            for(int i = 0; i < pv->lengthV ; i++) {
                fout << pv->dataV[i];
            }
            fout << ' ';
            pv = pv->prevV;
        }
        w*pw = new w;
        pw = topW;
        while(pw != NULL) {
            for(int i = 0; i < pw->lengthW ; i++) {
                fout << pw->dataW[i];
            }
            fout << ' ';
            pw = pw->prevW;
        }
        x*px = new x;
        px = topX;
        while(px != NULL) {
            for(int i = 0; i < px->lengthX ; i++) {
                fout << px->dataX[i];
            }
            fout << ' ';
            px = px->prevX;
        }
        y*py = new y;
        py = topY;
        while(py != NULL) {
            for(int i = 0; i < py->lengthY ; i++) {
                fout << py->dataY[i];
            }
            fout << ' ';
            py = py->prevY;
        }
        z*pz = new z;
        pz = topZ;
        while(pz != NULL) {
            for(int i = 0; i < pz->lengthZ ; i++) {
                fout << pz->dataZ[i];
            }
            fout << ' ';
            pz = pz->prevZ;
        }
    } else {
        fout << "nothing";
    }

    fin.close();
    fout.close();
    return 0;
}
