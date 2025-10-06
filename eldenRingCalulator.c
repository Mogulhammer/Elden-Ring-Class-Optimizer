#include <stdio.h>
#include <stdlib.h>

#define ARRAY_SIZE 12

#define FIND_LEVEL_DIFFERENCE(field)\
	total_level += (temp_class.field > starting_class.field)\
	?(temp_class.field - starting_class.field)\
	:0;

typedef struct{
	int vigor;
	int mind;
	int endurance;
	int strength;
	int dexterity;
	int intelligence;
	int faith;
	int arcane;
	
	const char *name;
	
	int starting_level;
	int ending_level;
}EldenRing_class;

int find_total_level(EldenRing_class temp_class, EldenRing_class starting_class)
{
	int total_level = starting_class.starting_level;
	
	FIND_LEVEL_DIFFERENCE(vigor)
	FIND_LEVEL_DIFFERENCE(mind)
	FIND_LEVEL_DIFFERENCE(endurance)
	FIND_LEVEL_DIFFERENCE(strength)
	FIND_LEVEL_DIFFERENCE(dexterity)
	FIND_LEVEL_DIFFERENCE(intelligence)
	FIND_LEVEL_DIFFERENCE(faith)
	FIND_LEVEL_DIFFERENCE(arcane)
	
	return total_level;
}

int compare_classes(const void *class1, const void *class2)
{
	EldenRing_class c1 = *(EldenRing_class *)class1;
	EldenRing_class c2 = *(EldenRing_class *)class2;
	return c1.ending_level - c2.ending_level;
}

void input_check(char *prompt)
{
	char *buffer;
	int value;
	
	printf("%s", prompt);
	
	while(1)
	{
		if(!fgets(buffer, 100, stdin))
		{
			printf("Please enter valid input.\n");
		}
		else break;
	}
	
	value = strtol(buffer, NULL , 10);
	
	while(1)
	{
		if(
	}
	
}

int main()
{
    EldenRing_class hero;
	EldenRing_class vagabond;
	EldenRing_class warrior;
    EldenRing_class bandit;
	EldenRing_class astrologer;
	EldenRing_class prophet;
	EldenRing_class samurai;
	EldenRing_class prisoner;
	EldenRing_class confessor;
	EldenRing_class wretch;
	EldenRing_class heavy_knight;
	EldenRing_class ides_knight;
	
	
	hero.vigor = 14;
	hero.mind = 9;
	hero.endurance = 12;
	hero.strength = 16;
	hero.dexterity = 9;
	hero.intelligence = 7;
	hero.faith = 8;
	hero.arcane = 11;
	hero.starting_level = 7;
	hero.name = "hero";
	
	vagabond.vigor = 15;
	vagabond.mind = 10;
	vagabond.endurance = 11;
	vagabond.strength = 14;
	vagabond.dexterity = 13;
	vagabond.intelligence = 9;
	vagabond.faith = 9;
	vagabond.arcane = 7;
	vagabond.starting_level = 9;
	vagabond.name = "vagabond";
	
	warrior.vigor = 11;
	warrior.mind = 12;
	warrior.endurance = 11;
	warrior.strength = 10;
	warrior.dexterity = 16;
	warrior.intelligence = 10;
	warrior.faith = 8;
	warrior.arcane = 9;
	warrior.starting_level = 8;
	warrior.name = "warrior";
	
	bandit.vigor = 10;
	bandit.mind = 11;
	bandit.endurance = 10;
	bandit.strength = 9;
	bandit.dexterity = 13;
	bandit.intelligence = 9;
	bandit.faith = 8;
	bandit.arcane = 14;
	bandit.starting_level = 5;
	bandit.name = "bandit";

	astrologer.vigor = 9;
	astrologer.mind = 15;
	astrologer.endurance = 9;
	astrologer.strength = 8;
	astrologer.dexterity = 12;
	astrologer.intelligence = 16;
	astrologer.faith = 7;
	astrologer.arcane = 9;
	astrologer.starting_level = 6;
	astrologer.name = "astrologer";
	
	prophet.vigor = 10;
	prophet.mind = 14;
	prophet.endurance = 8;
	prophet.strength = 11;
	prophet.dexterity = 10;
	prophet.intelligence = 7;
	prophet.faith = 16;
	prophet.arcane = 10;
	prophet.starting_level = 7;
	prophet.name = "prophet";
	
	samurai.vigor =12;
	samurai.mind = 11;
	samurai.endurance = 13;
	samurai.strength = 12;
	samurai.dexterity = 15;
	samurai.intelligence = 9;
	samurai.faith = 8;
	samurai.arcane = 8;
	samurai.starting_level = 9;
	samurai.name = "samurai";
	
	prisoner.vigor = 11;
	prisoner.mind = 12;
	prisoner.endurance = 11;
	prisoner.strength = 11;
	prisoner.dexterity = 14;
	prisoner.intelligence = 14;
	prisoner.faith = 6;
	prisoner.arcane = 9;
	prisoner.starting_level = 9;
	prisoner.name = "prisoner";
	
	confessor.vigor = 10;
	confessor.mind = 13;
	confessor.endurance = 10;
	confessor.strength = 12;
	confessor.dexterity = 12;
	confessor.intelligence = 9;
	confessor.faith = 14;
	confessor.arcane = 9;
	confessor.starting_level = 10;
	confessor.name = "confessor";
	
	wretch.vigor = 10;
	wretch.mind = 10;
	wretch.endurance = 10;
	wretch.strength = 10;
	wretch.dexterity = 10;
	wretch.intelligence = 10;
	wretch.faith = 10;
	wretch.arcane = 10;
	wretch.starting_level = 1;
	wretch.name = "wretch";
	
	heavy_knight.vigor = 14;
	heavy_knight.mind = 7;
	heavy_knight.endurance = 17;
	heavy_knight.strength = 15;
	heavy_knight.dexterity = 11;
	heavy_knight.intelligence = 7;
	heavy_knight.faith = 7;
	heavy_knight.arcane = 9;
	heavy_knight.starting_level = 8;
	heavy_knight.name = "heavy armored knight";
	
	ides_knight.vigor = 10;
	ides_knight.mind = 10;
	ides_knight.endurance = 11;
	ides_knight.strength = 13;
	ides_knight.dexterity = 15;
	ides_knight.intelligence = 8;
	ides_knight.faith = 11;
	ides_knight.arcane = 6;
	ides_knight.starting_level = 7;
	ides_knight.name = "knight of ides";
	
	
	
	EldenRing_class class_array[ARRAY_SIZE] = {
		hero,
		vagabond,
		warrior,
		bandit,
		astrologer,
		prophet,
		samurai,
		prisoner,
		confessor,
		wretch,
		heavy_knight,
		ides_knight
	};
	
	while(1)
	{
		EldenRing_class temp_class;
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
		
		printf("\n");
		for(int i = 0; i < ARRAY_SIZE; i++)
		{
			class_array[i].ending_level = find_total_level(temp_class, class_array[i]);
		}
		
		qsort(class_array, ARRAY_SIZE, sizeof(EldenRing_class), compare_classes);
		
		for(int i = 0; i < ARRAY_SIZE; i++)
		{
			printf("%s: %d\n", class_array[i].name, class_array[i].ending_level);
		}
	}
}
