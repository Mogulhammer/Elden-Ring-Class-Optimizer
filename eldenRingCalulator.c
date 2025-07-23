#include <stdio.h>

#define ARRAY_SIZE 10

struct EldenRing_class{
	int vigor;
	int mind;
	int endurance;
	int strength;
	int dexterity;
	int intelligence;
	int faith;
	int arcane;
	
	int starting_level;
	int ending_level;
};

//ok add a second eldenring class parameter, then find the difference between the two classes for every stat then add the starting level.
int find_total_level(struct EldenRing_class temp_class)
{
    temp_class.ending_level = temp_class.vigor + temp_class.mind + temp_class.endurance + temp_class.strength + temp_class.dexterity
	+ temp_class.intelligence + temp_class.faith + temp_class.arcane - 79;
	
	return temp_class.ending_level;
}

int main()
{
    struct EldenRing_class hero;
	struct EldenRing_class vagabond;
	struct EldenRing_class warrior;
	struct EldenRing_class bandit;
	struct EldenRing_class astrologer;
	struct EldenRing_class prophet;
	struct EldenRing_class samurai;
	struct EldenRing_class prisoner;
	struct EldenRing_class confessor;
	struct EldenRing_class wretch;
	
	hero.vigor = 14;
	hero.mind = 9;
	hero.endurance = 12;
	hero.strength = 16;
	hero.dexterity = 9;
	hero.intelligence = 7;
	hero.faith = 8;
	hero.arcane = 11;
	hero.starting_level = 7;
	
	vagabond.vigor = 15;
	vagabond.mind = 10;
	vagabond.endurance = 11;
	vagabond.strength = 14;
	vagabond.dexterity = 13;
	vagabond.intelligence = 9;
	vagabond.faith = 9;
	vagabond.arcane = 7;
	vagabond.starting_level = 9;
	
	warrior.vigor = 11;
	warrior.mind = 12;
	warrior.endurance = 11;
	warrior.strength = 10;
	warrior.dexterity = 16;
	warrior.intelligence = 10;
	warrior.faith = 8;
	warrior.arcane = 9;
	warrior.starting_level = 8;
	
	bandit.vigor = 10;
	bandit.mind = 11;
	bandit.endurance = 10;
	bandit.strength = 9;
	bandit.dexterity = 13;
	bandit.intelligence = 9;
	bandit.faith = 8;
	bandit.arcane = 14;
	bandit.starting_level = 5;

	astrologer.vigor = 9;
	astrologer.mind = 15;
	astrologer.endurance = 9;
	astrologer.strength = 8;
	astrologer.dexterity = 12;
	astrologer.intelligence = 16;
	astrologer.faith = 7;
	astrologer.arcane = 9;
	astrologer.starting_level = 6;
	
	prophet.vigor = 10;
	prophet.mind = 14;
	prophet.endurance = 8;
	prophet.strength = 11;
	prophet.strength = 10;
	prophet.intelligence = 7;
	prophet.faith = 16;
	prophet.arcane = 10;
	prophet.starting_level = 7;
	
	samurai.vigor =12;
	samurai.mind = 11;
	samurai.endurance = 13;
	samurai.strength = 12;
	samurai.dexterity = 15;
	samurai.intelligence = 9;
	samurai.faith = 8;
	samurai.arcane = 8;
	samurai.starting_level = 9;
	
	prisoner.vigor = 11;
	prisoner.mind = 12;
	prisoner.endurance = 11;
	prisoner.strength = 11;
	prisoner.dexterity = 14;
	prisoner.intelligence = 14;
	prisoner.faith = 6;
	prisoner.arcane = 9;
	prisoner.starting_level = 9;
	
	confessor.vigor = 10;
	confessor.mind = 13;
	confessor.endurance = 10;
	confessor.strength = 12;
	confessor.dexterity = 12;
	confessor.intelligence = 9;
	confessor.faith = 14;
	confessor.arcane = 9;
	confessor.starting_level = 10;
	
	wretch.vigor = 10;
	wretch.mind = 10;
	wretch.endurance = 10;
	wretch.strength = 10;
	wretch.dexterity = 10;
	wretch.intelligence = 10;
	wretch.faith = 10;
	wretch.arcane = 10;
	wretch.starting_level = 1;
	
	struct EldenRing_class class_array[ARRAY_SIZE] = {
		hero,
		vagabond,
		warrior,
		bandit,
		astrologer,
		prophet,
		samurai,
		prisoner,
		confessor,
		wretch
	};
	
	int ending_level = find_total_level(class_array[0]);
		
		printf("%d\n", ending_level);
	
	while(1)
	{
		struct EldenRing_class temp_class;
		printf("Enter vigor: ");
		scanf("%d", &temp_class.vigor);
		
		printf("Enter mind: ");
		scanf("%d", &temp_class.mind);
		
		printf("Enter endurance: ");
		scanf("%d", &temp_class.endurance);
		
		printf("Enter strength: ");
		scanf("%d", &temp_class.strength);
		
		printf("Enter dexterity: ");
		scanf("%d", &temp_class.dexterity);
		
		printf("Enter intelligence: ");
		scanf("%d", &temp_class.intelligence);
		
		printf("Enter faith: ");
		scanf("%d", &temp_class.faith);
		
		printf("Enter arcane: ");
		scanf("%d", &temp_class.arcane);
		
		/*for(int i = 0; i < ARRAY_SIZE; i++)
		{
			int ending_level = 0;
			ending_level = find_total_level(class_array[i]);
		}*/
	}
}