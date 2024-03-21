UTF8#1 22 TNI Sos StructuredText124 49 

1 55 4 2 3 4 5 0 0 0 0 0 0 1 11 environment2 6 29 2 33 38 2 44 47 0 0 929 (*********************** Calcul de la pression *********************************)(* pression absolue :                                                          *)(*   10 m = 2bar (1bar de pression atm et 1 bar dû à la pression de l'eau)     *)(*   + 1bar tous les 10m                                                       *)(*                                                                             *)(* pression hydrostatique : 1 bar tous les 10 m                                *)(*                                                                             *)(* 1 bar = 0.987 atm                                                           *)(*******************************************************************************)pressionHydrostatique := profondeur / 10;pressionAbsolue := pressionHydrostatique + 1024;pression := pressionAbsolue;(************** Gestion du quartz *************)tick := NOT tick;0 0 0 4 739 781 832 913 0 
2 119 18 IdentifierProperty1 36 f0bb9c8e-d22e-47f8-83c9-cfbba16c40060 
3 119 15 dlcPropertyName1 1 00 
4 119 14 sdPropertyName1 10 11577206460 
5 119 25 containerNamePropertyName1 9 clock_tni0 
6 126 2 7 8 0 4 9 14 19 24 7 Buttons
7 119 18 IdentifierProperty1 36 160b6f3b-4fcb-466d-930c-78c1931ec9020 
8 119 2 io1 4 true0 
9 125 3 10 11 12 6 0 2 B113 6 0 
10 119 18 IdentifierProperty1 36 571d97e0-c1b4-4369-aeaf-89402e7eec140 
11 119 7 libelle1 12 Setting mode0 
12 119 2 io1 4 true0 
13 59 -1 0 0 
14 125 3 15 16 17 6 0 2 B218 6 0 
15 119 18 IdentifierProperty1 36 054c6e0f-ec63-44ca-ab8a-7e882f8b426b0 
16 119 7 libelle1 15 Time adjustment0 
17 119 2 io1 4 true0 
18 59 -1 0 0 
19 125 3 20 21 22 6 0 2 B323 6 0 
20 119 18 IdentifierProperty1 36 bfc71095-8472-4024-99e1-afb5564bc7ee0 
21 119 7 libelle1 18 Pressure/Time mode0 
22 119 2 io1 4 true0 
23 59 -1 0 0 
24 125 3 25 26 27 6 0 2 B428 6 0 
25 119 18 IdentifierProperty1 36 a851651e-96ec-4d99-b8f6-9e705cbef6a00 
26 119 7 libelle1 5 Light0 
27 119 2 io1 4 true0 
28 59 -1 0 0 
29 125 2 30 31 0 0 10 profondeur32 0 0 
30 119 18 IdentifierProperty1 36 8255e170-1874-4d26-9886-07b35d37eee40 
31 119 7 libelle1 22 Profondeur d'immersion0 
32 61 -1 0 0 
33 126 1 34 0 1 35 14 PressureSensor
34 119 18 IdentifierProperty1 36 89686e7d-3ba6-4fe4-8a5e-f49c31b053980 
35 125 1 36 33 0 8 pression37 33 0 
36 119 18 IdentifierProperty1 36 1add4420-e593-49bf-a604-89c9d30021100 
37 61 -1 0 0 
38 126 1 39 0 1 40 10 fromQuartz
39 119 18 IdentifierProperty1 36 0a8f911d-7ff4-4b24-9225-f1a9065dc7070 
40 125 2 41 42 38 0 4 tick43 38 0 
41 119 18 IdentifierProperty1 36 467a24ac-0108-4f8f-82b4-3a0801e5b7910 
42 119 7 libelle1 12 tick horloge0 
43 59 -1 0 0 
44 125 1 45 0 0 21 pressionHydrostatique46 0 0 
45 119 18 IdentifierProperty1 36 307a4bd4-7cc0-4bef-9cb7-f3511f227e6b0 
46 61 -1 0 0 
47 125 1 48 0 0 15 pressionAbsolue49 0 0 
48 119 18 IdentifierProperty1 36 09b909e3-4b3e-4c36-b979-7c8e157aa5570 
49 61 -1 0 0 
	�
