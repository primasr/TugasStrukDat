#include <iostream>
#include <list>
#include <algorithm>
#include <graphics.h>

using namespace std;

class Point {
    public:
        int x, y;
        string nama;
        Point(int xx, int yy, string s)
        {
            x = xx;
            y = yy;
            nama = s;
        }
        int getX()
        {
            return x;
        }
        int getY()
        {
            return y;
        }
        string getNama()
        {
            return nama;
        }
};

class VerticePoint {
    public:
        pair <int,int> kiri,kanan,atas,bawah;
        VerticePoint(pair <int,int> kiri1, pair <int,int> kanan1,
                     pair <int,int> atas1, pair <int,int> bawah1)
        {
            kiri = kiri1;
            kanan = kanan1;
            atas = atas1;
            bawah = bawah1;
        }
        pair <int,int> getKiri()
        {
            return kiri;
        }
        pair <int,int> getKanan()
        {
            return kanan;
        }
        pair <int,int> getAtas()
        {
            return atas;
        }
        pair <int,int> getBawah()
        {
            return bawah;
        }
};

char nama[15][30] = {"Bundaran_ITS         ","Graha_ITS            ","Science_Technopark   ",
                     "Manarul_Ilmi         ","Rektorat             ","SCC_ITS              ",
                     "Bundaran_Tek_Elektro ","PDR_Kapal_Nasional   ","Research_Center      ",
                     "Perumdos_Blok_U      ","Medical_Center       ","GR_Ballroom          "};

void gambarGaris(int v)
{
    for (int i= 0 ; i< v; i++)
    {
        cout << "=";
    }
    cout << endl;
}

class graph
{
private:
    int v;
    list <int>* adj;
    list <Point>* coord;
    list <VerticePoint>* Vcoord;

public:

    //constructor
    graph(int V)
    {
        this->v = V;
        adj = new list <int>[V];
        coord = new list <Point>[V];
        Vcoord = new list <VerticePoint>[V];

    }

    void UndirectEdge(int u, int v)
    {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void DirectEdge(int u, int v)
    {
        adj[u].push_back(v);
    }

    void addVertice(int v, int xx, int yy, string s)
    {
        Point p(xx,yy,s);
        coord[v].push_back(p);
    }

    void gambarCircle(int vertice, int x1,int y1)
    {
        pair <int,int> kiri,kanan,atas,bawah;

        switch (vertice)
        {
        case 0:
            {
            ellipse(x1+45,y1+8,0,360,60,30); /**asumsi (x,y,r1,r2)*/

            kiri = make_pair(x1+45-60,y1+8); /** (x-r1,y) */
            kanan = make_pair(x1+45+60,y1+8); /** (x+r1,y) */
            atas = make_pair(x1+45,y1+8-30); /** (x,y-r2) */
            bawah = make_pair(x1+45,y1+8+30); /** (x,y+r2) */
            VerticePoint vp(kiri,kanan,atas,bawah);
            Vcoord[vertice].push_back(vp);
            break;
            }

        case 1:
            {
            ellipse(x1+40,y1+8,0,360,55,30);

            kiri = make_pair(x1+40-55,y1+8);
            kanan = make_pair(x1+40+55,y1+8);
            atas = make_pair(x1+40,y1+8-30);
            bawah = make_pair(x1+40,y1+8+30);
            VerticePoint vp(kiri,kanan,atas,bawah);
            Vcoord[vertice].push_back(vp);
            break;
            }

        case 2:
            {
            ellipse(x1+70,y1+8,0,360,80,30);

            kiri = make_pair(x1+70-80,y1+8);
            kanan = make_pair(x1+70+80,y1+8);
            atas = make_pair(x1+70,y1+8-30);
            bawah = make_pair(x1+70,y1+8+30);
            VerticePoint vp(kiri,kanan,atas,bawah);
            Vcoord[vertice].push_back(vp);
            break;
            }

        case 3:
            {
            ellipse(x1+45,y1+8,0,360,60,30);

            kiri = make_pair(x1+45-60,y1+8);
            kanan = make_pair(x1+45+60,y1+8);
            atas = make_pair(x1+45,y1+8-30);
            bawah = make_pair(x1+45,y1+8+30);
            VerticePoint vp(kiri,kanan,atas,bawah);
            Vcoord[vertice].push_back(vp);
            break;
            }

        case 4:
            {
            ellipse(x1+27,y1+8,0,360,40,30);

            kiri = make_pair(x1+27-40,y1+8);
            kanan = make_pair(x1+27+40,y1+8);
            atas = make_pair(x1+27,y1+8-30);
            bawah = make_pair(x1+27,y1+8+30);
            VerticePoint vp(kiri,kanan,atas,bawah);
            Vcoord[vertice].push_back(vp);
            break;
            }

        case 5:
            {
            ellipse(x1+32,y1+8+10,0,360,40,30);

            kiri = make_pair(x1+32-40,y1+8+10);
            kanan = make_pair(x1+32+40,y1+8+10);
            atas = make_pair(x1+32,y1+8-30+10);
            bawah = make_pair(x1+32,y1+8+30+10);
            VerticePoint vp(kiri,kanan,atas,bawah);
            Vcoord[vertice].push_back(vp);
            break;
            }

        case 6:
            {
            ellipse(x1+72,y1+8,0,360,85,30);

            kiri = make_pair(x1+72-85,y1+8);
            kanan = make_pair(x1+72+85,y1+8);
            atas = make_pair(x1+72,y1+8-30);
            bawah = make_pair(x1+72,y1+8+30);
            VerticePoint vp(kiri,kanan,atas,bawah);
            Vcoord[vertice].push_back(vp);
            break;
            }

        case 7:
            {
            ellipse(x1+70,y1+8,0,360,80,30);

            kiri = make_pair(x1+70-80,y1+8);
            kanan = make_pair(x1+70+80,y1+8);
            atas = make_pair(x1+70,y1+8-30);
            bawah = make_pair(x1+70,y1+8+30);
            VerticePoint vp(kiri,kanan,atas,bawah);
            Vcoord[vertice].push_back(vp);
            break;
            }

        case 8:
            {
            ellipse(x1+60+20,y1+8,0,360,80,30);

            kiri = make_pair(x1+60+20-80,y1+8);
            kanan = make_pair(x1+60+20+80,y1+8);
            atas = make_pair(x1+60+20,y1+8-30);
            bawah = make_pair(x1+60+20,y1+8+30);
            VerticePoint vp(kiri,kanan,atas,bawah);
            Vcoord[vertice].push_back(vp);
            break;
            }

        case 9:
            {
            ellipse(x1+65,y1+8,0,360,80,30);

            kiri = make_pair(x1+65-80,y1+8);
            kanan = make_pair(x1+65+80,y1+8);
            atas = make_pair(x1+65,y1+8-30);
            bawah = make_pair(x1+65,y1+8+30);
            VerticePoint vp(kiri,kanan,atas,bawah);
            Vcoord[vertice].push_back(vp);
            break;
            }

        case 10:
            {
            ellipse(x1+50,y1+8,0,360,60,30);

            kiri = make_pair(x1+50-60,y1+8);
            kanan = make_pair(x1+50+60,y1+8);
            atas = make_pair(x1+50,y1+8-30);
            bawah = make_pair(x1+50,y1+8+30);
            VerticePoint vp(kiri,kanan,atas,bawah);
            Vcoord[vertice].push_back(vp);
            break;
            }

        case 11:
            {
            ellipse(x1+45-20,y1+8,0,360,60,30);

            kiri = make_pair(x1+45-20-60,y1+8);
            kanan = make_pair(x1+45-20+60,y1+8);
            atas = make_pair(x1+45-20,y1+8-30);
            bawah = make_pair(x1+45-20,y1+8+30);
            VerticePoint vp(kiri,kanan,atas,bawah);
            Vcoord[vertice].push_back(vp);
            break;
            }

        }
    }

    void gambarVertice(int V)
    {
        for (int v = 0; v < V; v++)
        {
            auto i = coord[v].begin();

            int x1 = i->getX();
            int y1 = i->getY();
            string nama1 = i->getNama();

            int n = nama1.length();

            char nama2[n+1];
            strcpy(nama2,nama1.c_str());


            if (v == 11) outtextxy(x1-20, y1, nama2);
            else if (v == 8) outtextxy(x1+20, y1, nama2);
            else if (v == 5) outtextxy(x1, y1+10, nama2);
            else outtextxy(x1, y1, nama2);
            gambarCircle(v,x1,y1);

            /*
            if (v != 11) outtextxy(x1, y1, nama2);
            else outtextxy(x1-20, y1, nama2);
            gambarCircle(v,x1,y1);
            */

        }
    }

    void gambarEdge()
    {
        setcolor(GREEN);

    /**  (0)Bundaran_ITS         ->  (1)Graha_ITS               **/
        auto i = Vcoord[0].begin();
        auto j = Vcoord[1].begin();

        pair <int,int> kiri_i = i->getKiri();
        pair <int,int> kanan_i = i->getKanan();
        pair <int,int> atas_i = i->getAtas();
        pair <int,int> bawah_i = i->getBawah();

        pair <int,int> kiri_j = j->getKiri();
        pair <int,int> kanan_j = j->getKanan();
        pair <int,int> atas_j = j->getAtas();
        pair <int,int> bawah_j = j->getBawah();

        moveto(atas_i.first, atas_i.second);
        lineto(kiri_j.first, kiri_j.second);

    /**  (1)Graha_ITS            ->  (2)Science_Technopark      **/
        i = Vcoord[1].begin();
        j = Vcoord[2].begin();

        kanan_i = i->getKanan();

        kiri_j = j->getKiri();

        moveto(kanan_i.first, kanan_i.second);
        lineto(kiri_j.first, kiri_j.second);

    /**  (2)Science_Technopark   ->  (7)PDR_Kapal_Nasional      **/
        i = Vcoord[2].begin();
        j = Vcoord[7].begin();

        bawah_i = i->getBawah();

        atas_j = j->getAtas();

        moveto(bawah_i.first, bawah_i.second);
        lineto(atas_j.first, atas_j.second);

    /**  (7)PDR_Kapal_Nasional   ->  (8)Research_Center         **/
        i = Vcoord[7].begin();
        j = Vcoord[8].begin();

        bawah_i = i->getBawah();

        atas_j = j->getAtas();

        moveto(bawah_i.first, bawah_i.second);
        lineto(atas_j.first, atas_j.second);

    /**  (8)Research_Center      ->  (9)Perumdos_Blok_U         **/
        i = Vcoord[8].begin();
        j = Vcoord[9].begin();

        bawah_i = i->getBawah();

        atas_j = j->getAtas();

        moveto(bawah_i.first, bawah_i.second);
        lineto(atas_j.first, atas_j.second);

    /**  (9)Perumdos_Blok_U      ->  (6)Bundaran_Tek_Elektro    **/
        i = Vcoord[9].begin();
        j = Vcoord[6].begin();

        kiri_i = i->getKiri();

        kanan_j = j->getKanan();

        moveto(kiri_i.first, kiri_i.second);
        lineto(kanan_j.first, kanan_j.second);

    /**  (6)Bundaran_Tek_Elektro ->  (10)Medical_Center         **/
        i = Vcoord[6].begin();
        j = Vcoord[10].begin();

        bawah_i = i->getBawah();

        atas_j = j->getAtas();

        moveto(bawah_i.first, bawah_i.second);
        lineto(atas_j.first, atas_j.second);

    /**  (10)Medical_Center      ->  (11)GR_Ballroom            **/
        i = Vcoord[10].begin();
        j = Vcoord[11].begin();

        kiri_i = i->getKiri();

        kanan_j = j->getKanan();

        moveto(kiri_i.first, kiri_i.second);
        lineto(kanan_j.first, kanan_j.second);

    /**  (11)GR_Ballroom         ->  (0)Bundaran_ITS            **/
        i = Vcoord[11].begin();
        j = Vcoord[0].begin();

        atas_i = i->getAtas();

        kiri_j = j->getKiri();

        moveto(atas_i.first, atas_i.second);
        lineto(kiri_j.first, kiri_j.second);

    /**  (0)Bundaran_ITS         ->  (4)Rektorat                **/
    setcolor(YELLOW);

        i = Vcoord[0].begin();
        j = Vcoord[4].begin();

        bawah_i = i->getBawah();

        atas_j = j->getAtas();

        moveto(bawah_i.first, bawah_i.second);
        lineto(atas_j.first, atas_j.second);

    /**  (4)Rektorat             ->  (5)SCC_ITS                 **/
        i = Vcoord[4].begin();
        j = Vcoord[5].begin();

        bawah_i = i->getBawah();

        atas_j = j->getAtas();

        moveto(bawah_i.first, bawah_i.second);
        lineto(atas_j.first, atas_j.second);

    /**  (5)SCC_ITS              ->  (6)Bundaran_Tek_Elektro    **/
    setcolor(GREEN);

        i = Vcoord[5].begin();
        j = Vcoord[6].begin();

        bawah_i = i->getBawah();

        atas_j = j->getAtas();

        moveto(bawah_i.first, bawah_i.second);
        lineto(atas_j.first, atas_j.second);

    /**  (5)SCC_ITS              ->  (3)Manarul_Ilmi            **/
    setcolor(YELLOW);
        i = Vcoord[5].begin();
        j = Vcoord[3].begin();

        //atas_i = i->getAtas();
        kiri_i = i->getKiri();

        bawah_j = j->getBawah();

        moveto(kiri_i.first, kiri_i.second);
        lineto(bawah_j.first, bawah_j.second);

    /**  (3)Manarul_Ilmi         ->  (0)Bundaran_ITS            **/
        i = Vcoord[3].begin();
        j = Vcoord[0].begin();

        kiri_i = i->getKiri();

        bawah_j = j->getBawah();

        moveto(kiri_i.first, kiri_i.second);
        lineto(bawah_j.first, bawah_j.second);
    }

    void gambarPanah()
    {
        setcolor(YELLOW);
    /**  (0)Bundaran_ITS         ->  (4)Rektorat                **/
        auto j = Vcoord[4].begin();

        pair <int,int> kiri_j = j->getKiri();
        pair <int,int> kanan_j = j->getKanan();
        pair <int,int> atas_j = j->getAtas();
        pair <int,int> bawah_j = j->getBawah();

        moveto(atas_j.first, atas_j.second);
        lineto(atas_j.first-10, atas_j.second-10);

        moveto(atas_j.first, atas_j.second);
        lineto(atas_j.first-13, atas_j.second+10);
    /**  (4)Rektorat             ->  (5)SCC_ITS                 **/

        j = Vcoord[5].begin();

        atas_j = j->getAtas();

        moveto(atas_j.first, atas_j.second);
        lineto(atas_j.first+2, atas_j.second-15);

        moveto(atas_j.first, atas_j.second);
        lineto(atas_j.first+15, atas_j.second-2);
    /**  (5)SCC_ITS              ->  (3)Manarul_Ilmi            **/
        j = Vcoord[3].begin();

        bawah_j = j->getBawah();

        moveto(bawah_j.first, bawah_j.second);
        lineto(bawah_j.first+15, bawah_j.second+2);

        moveto(bawah_j.first, bawah_j.second);
        lineto(bawah_j.first, bawah_j.second+12);
    /**  (3)Manarul_Ilmi         ->  (0)Bundaran_ITS            **/
        j = Vcoord[0].begin();

        bawah_j = j->getBawah();

        moveto(bawah_j.first, bawah_j.second);
        lineto(bawah_j.first-5, bawah_j.second+10);

        moveto(bawah_j.first, bawah_j.second);
        lineto(bawah_j.first+10, bawah_j.second+8);
    }

    void gambarKeterangan()
    {
        auto i = Vcoord[9].begin();


        pair <int,int> kiri_i = i->getKiri();
        pair <int,int> kanan_i = i->getKanan();

        kiri_i.first += 25;
        kiri_i.second += 125;
        moveto(kiri_i.first, kiri_i.second);
        setcolor(WHITE);
        outtextxy(kiri_i.first, kiri_i.second, "Keterangan");

        kiri_i.second += 30;
        setcolor(YELLOW);
        moveto(kiri_i.first, kiri_i.second+8);
        lineto(kiri_i.first+50, kiri_i.second+8);
        setcolor(WHITE);
        outtextxy(kiri_i.first+50+15, kiri_i.second, ":  Satu arah");

        kiri_i.second += 25;
        setcolor(GREEN);
        moveto(kiri_i.first, kiri_i.second+8);
        lineto(kiri_i.first+50, kiri_i.second+8);
        setcolor(WHITE);
        outtextxy(kiri_i.first+50+15, kiri_i.second, ":  Dua arah");

        kiri_i = i->getKiri();

        setcolor(RED);
        rectangle(kiri_i.first,kiri_i.second+120,
                  kanan_i.first+25,kanan_i.second+200);
    }

    void tampilkan_nama(int V)
    {
        for(int v = 0; v < V; v++)
        {
            printf("%s",nama[v]);
            for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
            {
                printf(" -> %s", nama[*i]);
            }
            printf("\n");
        }
    }

    void tampilkan_angka(int V)
    {
        for(int v = 0; v < V; v++)
        {
            printf("%d",v);
            for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
            {
                printf(" -> %d", *i);
            }
            printf("\n");
        }
    };
};

const int WIDTH = 800, HEIGHT = 650;

int main ()
{

    graph g(12);

    g.addVertice(0,195-60,170,"Bundaran_ITS"); // x-60
    g.addVertice(1,240,60+20,"Graha__ITS"); //y+20
    g.addVertice(2,370+40,20+30,"Science_Technopark"); //x+40 and y+30
    g.addVertice(3,295-80,280,"Manarul_Ilmi"); // x-80
    g.addVertice(4,340,270-10,"Rektorat"); // y-10
    g.addVertice(5,310,325+20,"SCC__ITS"); //y+20
    g.addVertice(6,320+20,450,"Bundaran_Tek_Elektro"); // x+20
    g.addVertice(7,500,160-20,"PDR_Kapal_Nasional"); //y-20
    g.addVertice(8,470+20,250,"Research__Center"); //x+20
    g.addVertice(9,555+40,335+40,"Perumdos__Blok_U"); //x+40 and y+40
    g.addVertice(10,270,590,"Medical_Center");
    g.addVertice(11,95-20-20,540,"GR__Ballroom"); //x-20-20

    g.UndirectEdge(0,1);
    g.DirectEdge(0,4); //direct
    g.DirectEdge(3,0); //direct
    g.UndirectEdge(11,0);

    g.UndirectEdge(1,2);
    g.UndirectEdge(2,7);
    g.UndirectEdge(7,8);
    g.UndirectEdge(8,9);
    g.UndirectEdge(9,6);
    g.UndirectEdge(6,10);
    g.UndirectEdge(10,11);

    g.DirectEdge(4,5); //direct
    g.DirectEdge(5,3); //direct
    g.UndirectEdge(5,6);



    gambarGaris(100);
    cout << "\n\t# DISPLAY WITH NODE NUMBER #\n\n";
    gambarGaris(100);
    g.tampilkan_angka(12);

    gambarGaris(100);
    cout << "\n\t# DISPLAY WITH NODE NAME #\n\n";
    gambarGaris(100);
    g.tampilkan_nama(12);

    initwindow(WIDTH, HEIGHT);

    g.gambarVertice(12);
    g.gambarEdge();
    g.gambarPanah();
    g.gambarKeterangan();

    getch();

    closegraph();

    return 0;
}
