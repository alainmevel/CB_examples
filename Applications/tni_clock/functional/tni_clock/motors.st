UTF8#1 22 TNI Sos StructuredText124 30 

1 55 4 2 3 4 5 0 0 0 0 0 0 1 6 motors1 6 0 1 20 0 0 471 (** Calcul de la position des aiguilles en degrès pour l'animation **)IF RE stepMotorHour THEN	hoursCounter := hoursCounter + 360/24;	IF hoursCounter >= 360 THEN hoursCounter:=0; END_IF;END_IF;IF RE stepMotorMinute THEN	minutesCounter:= minutesCounter+ 360/60;	IF minutesCounter >= 360 THEN minutesCounter:=0; END_IF;END_IF;IF RE stepMotorSecond THEN	secondsCounter:= secondsCounter + 360/60;	IF secondsCounter >= 360 THEN secondsCounter:=0; END_IF;END_IF;0 0 0 12 100 168 140 74 229 301 271 201 364 437 407 336 0 
2 119 18 IdentifierProperty1 36 d40d32bf-6d30-49c3-a545-e357508721c30 
3 119 15 dlcPropertyName1 1 00 
4 119 14 sdPropertyName1 10 11577206460 
5 119 25 containerNamePropertyName1 9 clock_tni0 
6 126 1 7 0 3 8 12 16 6 Motors
7 119 18 IdentifierProperty1 36 73e6a3b3-d3ae-4b65-97f4-3efacc0179ca0 
8 125 2 9 10 6 0 15 stepMotorSecond11 6 0 
9 119 18 IdentifierProperty1 36 9e9cd868-aa72-4502-b831-038944f102d80 
10 119 7 libelle1 69 Donne l'ordre au moteur de l'aiguille des secondes d'avancer d'un pas0 
11 59 -1 0 0 
12 125 2 13 14 6 0 15 stepMotorMinute15 6 0 
13 119 18 IdentifierProperty1 36 548269a6-d8de-4403-9789-a75be19fdf8e0 
14 119 7 libelle1 68 Donne l'ordre au moteur de l'aiguille des minutes d'avancer d'un pas0 
15 59 -1 0 0 
16 125 2 17 18 6 0 13 stepMotorHour19 6 0 
17 119 18 IdentifierProperty1 36 b4b9bb30-7ee1-4473-a46c-0b66a30fd99f0 
18 119 7 libelle1 67 Donne l'ordre au moteur de l'aiguille des heures d'avancer d'un pas0 
19 59 -1 0 0 
20 126 1 21 0 3 22 25 28 16 positionAguilles
21 119 18 IdentifierProperty1 36 a6052a29-07fd-40fd-afb2-2f46b10105360 
22 125 1 23 20 0 12 hoursCounter24 20 0 
23 119 18 IdentifierProperty1 36 46b3a7ed-f164-4b39-9709-74ab596ad1390 
24 61 -1 0 0 
25 125 1 26 20 0 14 minutesCounter27 20 0 
26 119 18 IdentifierProperty1 36 678ebcfc-89ce-4d1d-81bb-f6bd5bc9dcb00 
27 61 -1 0 0 
28 125 1 29 20 0 14 secondsCounter30 20 0 
29 119 18 IdentifierProperty1 36 0b2ba765-016d-4f96-82c0-310997fd52710 
30 61 -1 0 0 
.]