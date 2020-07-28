struct Infection
{
	int infector;
	int infectee;
};

Infection inf_queue[10], Hosts[10];


void init()
{
    for (int i = 0; i < 10; i++)
    {
        inf_queue[i].infectee = i;
        inf_queue[i].infector = 9 - i;
    }
}

void sample()
{
    for (int i = 0; i < 10; i++)
    {
        int infector = inf_queue[i].infector;
        int infectee = inf_queue[i].infectee;
        Hosts[infectee].infector = infector;
    }
}

