waitUntil {!isNull player && player isEqualTo player};
if (player diarySubjectExists "controls") exitWith {};

player createDiarySubject ["space1","--------------------------"];
player createDiarySubject ["ChangeLog","ChangeLog"];
player createDiarySubject ["Regeln","Regeln"];
player createDiarySubject ["Teamspeak 3","Teamspeak 3"];
player createDiarySubject ["Fragen","Support"];
player createDiarySubject ["items","Lizenzen/Items","Routen"];
player createDiarySubject ["controls","Tastenbelegung"];
player createDiarySubject ["space2","--------------------------"];
player createDiarySubject ["Illegales","Illegales"];
player CreateDiarySubject ["space3","--------------------------"];
player CreateDiarySubject ["TwitchStream","TwitchStream"];
player CreateDiarySubject ["space4","--------------------------"];

player createDiaryRecord ["Regeln",
	[
		"Regelwerk",
			"
			<br />
			<font color='#FACC2E'>Unsere aktuellen Regeln findet ihr unter:</font><br/>
			<br />
			<font color='#FACC2E'>http://michecortes.de/serverinfo/armaregeln/</font><br/>
			<br />
			"
	]
];

player createDiaryRecord ["TwitchStream",
	[
		"MicheCortesLP",
			"
			<br />
			<font color='#FACC2E'>Schaut MicheCortes im Stream zu und werdet Teil von etwas Größerem</font><br/>
			<br />
			<font color='#FACC2E'>http://www.twitch.com/michecorteslp</font><br/>
			<br />
			"
	]
];


player createDiaryRecord ["Teamspeak 3",
	[
		"Teamspeak 3",
			"
			<br />
			<font color='#FACC2E'>Unseren TeamSpeak³-Server findest du unter: michecortes.teamspeak.de</font><br/>
			<br/>
			<font color='#FACC2E'>Unsere Website findest du unter:</font><br/>
			michecortes.de<br/>
			"
	]
];
	
player createDiaryRecord ["Fragen",
	[
		"Fragen/Fahrzeugverlust",
			"
			<br />
			Du hast eine Frage oder einen Fahrzeugverlust zu melden? Find dich in<br />
			unseren Supportchannel ein!<br /><br />
			Unsere Supporter warten um dir helfen zu können.
			"
	]
];
	
player createDiaryRecord ["items",
	[
		"Lizenzen/Items",
			"
			<br />
			=== <font color='#FE642E'>Items</font> ==============================================<br />
			[<font color='#63bfaa'>Spitzhacke</font>] - Kupfer<br />
			[<font color='#63bfaa'>Spitzhacke</font>] - Eisen<br />
			[<font color='#63bfaa'>Schaufel</font>] - Gold<br />
			[<font color='#63bfaa'>Spitzhacke</font>] - Diamant<br />
			[<font color='#63bfaa'>Netz</font>] - Perlen<br />
			[<font color='#63bfaa'>Handschuhe</font>] - K.O Tropfen<br />
	        [<font color='#63bfaa'>Netz</font>] - LSD<br />
			[<font color='#63bfaa'>Kontaminationsschutzanzug</font>] - Waffenfähiges Uran<br />
			<br />
			=== <font color='#2E2EFE'>Lizenzen (Allgemein)</font> =============================================<br />
			[<font color='#63bfaa'>1.400 €</font>] - Führerschein<br />
			[<font color='#63bfaa'>3.000 €</font>] - Bootsschein<br />
			[<font color='#63bfaa'>6.000 €</font>] - Gefahrgutführerschein<br />
			[<font color='#63bfaa'>16.000 €</font>] - LKW Führerschein<br />
			[<font color='#63bfaa'>12.000 €</font>] - Waffenschein<br />
			[<font color='#63bfaa'>15.000 €</font>] - Helikopterschein<br />
			[<font color='#63bfaa'>20.000 €</font>] - Pilotenschein<br />
			[<font color='#63bfaa'>30.000 €</font>] - Berufpilotenschein<br />
			[<font color='#63bfaa'>175.000 €</font>] - Rebellentraining<br />
			[<font color='#63bfaa'>1.000.000 €</font>] - Hausbesitzerurkunde<br />
			[<font color='#63bfaa'>4.000.000 €</font>] - Elite-Waffenschein<br />
			<br />
			=== <font color='#FF0040'>Lizenzen (Farming)</font> =========================================<br />
			[<font color='#63bfaa'>500 €</font>] - Fruchtwerk<br />
			[<font color='#63bfaa'>1.100 €</font>] - Metallverarbeitung<br />
			[<font color='#63bfaa'>700 €</font>] - Kakao<br />
			[<font color='#63bfaa'>1.600 €</font>] - Kaffee<br />
			[<font color='#63bfaa'>7.000 €</font>] - Presse<br />
			[<font color='#63bfaa'>10.000 €</font>] - Diamant<br />
			[<font color='#63bfaa'>1.550 €</font>] - Sieber<br />
			[<font color='#63bfaa'>1.800 €</font>] - Öl<br />
			[<font color='#63bfaa'>6.000 €</font>] - Zigaretten<br />
			[<font color='#63bfaa'>10.000 €</font>] - Muschel<br />
			[<font color='#63bfaa'>22.000 €</font>] - Marihuana<br />
			[<font color='#63bfaa'>30.000 €</font>] - Kokain<br />
			[<font color='#63bfaa'>35.000 €</font>] - Heroin<br />
			[<font color='#63bfaa'>42.000 €</font>] - LSD<br />
			[<font color='#63bfaa'>2.000 €</font>] - Gift Mischer<br />
			[<font color='#63bfaa'>50.000 €</font>] - Ophiotoxin Mischer<br />
			"
	]
];

player createDiaryRecord ["items",
	[
		"Routen",
			"
			<br />
			=== <font color='#FE642E'>Anfangsrouten</font> ==============================================<br />
			[<font color='#63bfaa'>Bananen</font>] - Bananenplantage -> Markt<br />
			[<font color='#63bfaa'>Bananensaft</font>] - Bananenplantage -> Fruchtwerk -> Wikibar<br />
			[<font color='#63bfaa'>Erdbeeren</font>] - Erdbeerfeld -> Markt<br />
			[<font color='#63bfaa'>Erdbeersaft</font>] - Erdbeerfeld -> Fruchtwerk -> Wikibar<br />
			[<font color='#63bfaa'>Schokolade</font>] - Kakaoplantage -> Schokoladenfabrik -> Schokoladenhändler<br />
			[<font color='#63bfaa'>Chips</font>] - Kartoffelfeld -> Rösterrei -> Markt<br />
			[<font color='#63bfaa'>Eiswürfel</font>] - Quellwasser -> Gefrierschrank FARA HQ -> Wikibar<br />
			[<font color='#63bfaa'>Kupferbarren</font>] - Kupfermine -> Metallschmelze -> Metallhändler<br />
			<br />
			=== <font color='#2E2EFE'>Mittelrouten Legal</font> =============================================<br />
			[<font color='#63bfaa'>Kaffepulver</font>] - Kaffeplantage -> Kaffemühle -> Café<br />
			[<font color='#63bfaa'>Kokosnussmilch</font>] - Kokosnusspalmen -> Kokosnussknacker -> Wikibar<br />
			[<font color='#63bfaa'>Eisenbarren</font>] - Eisenmine -> Metallschmelze -> Metallhändler<br />
			[<font color='#63bfaa'>Goldbarren</font>] - Goldkies -> Sieber -> Metallschmelze -> Juwelier<br />
			[<font color='#63bfaa'>Diesel</font>] - Ölfeld -> Diesel Raffinerie -> Tankstelle<br />
			[<font color='#63bfaa'>Diamant</font>] - Kohlemine -> Presswerk -> Diamantschleifer -> Juwelier<br />
			<br />
			=== <font color='#2E2EFE'>Mittelrouten Illegal</font> =============================================<br />
			[<font color='#63bfaa'>K.O. Tropfen</font>] - Schlangen -> Giftmischer -> Ophiotoxinmischer -> Tempel Disco<br />
			[<font color='#63bfaa'>Marihuana</font>] - Canabisplantage -> Marihuanaverarbeiter -> Drogendealerin<br />
			<br />
			=== <font color='#FF0040'>Große Routen Legal</font> =========================================<br />
			[<font color='#63bfaa'>Perlen</font>] - Muscheln -> Muschelknacker -> Juwelier<br />
			<br />
			=== <font color='#FF0040'>Große Routen Illegal</font> =========================================<br />
			[<font color='#63bfaa'>Kokain</font>] - Kokaplantage -> Kokainverarbeiter -> Drogendealerin<br />
			[<font color='#63bfaa'>Heroin</font>] - Mohnfeld -> Heroinverarbeiter -> Drogendealerin<br />
			"
	]
]; 
	
player createDiaryRecord ["controls",
	[
		"Tastenbelegung",
			"
			<br />
			=== <font color='#FE642E'>Allgemein</font> ==============================================<br />
			[<font color='#63bfaa'>M</font>] - Karte anzeigen<br />
			[<font color='#63bfaa'>LEERTASTE</font>] - Aktion aus dem Scrollmenü ausführen<br />
			[<font color='#63bfaa'>T</font>] - Kofferraum/Lagerkammer<br />
			[<font color='#63bfaa'>L</font>] - Licht an/aus (Nur in der Nacht)<br />
			[<font color='#63bfaa'>Z</font>] - Spielermenü<br />
			[<font color='#63bfaa'>U</font>] - Auf-/Abschließen von Türen (Fahrzeuge und Häuser)<br />
			[<font color='#63bfaa'>#</font>] - Salutieren<br />
			[<font color='#63bfaa'>SHIFT + H</font>] - Waffe holstern<br />
			[<font color='#63bfaa'>SHIFT + B</font>] - Ergeben<br />
			[<font color='#63bfaa'>Pos1</font>] - Sounds lauter<br />
			[<font color='#63bfaa'>Ende</font>] - Sounds leiser<br />
			[<font color='#63bfaa'>Ä</font>] - Hinsetzen<br />
			[<font color='#63bfaa'>2x STRG</font>] - Waffe senken<br />
			[<font color='#63bfaa'>Rechte STRG + M</font>] - GPS öffnen<br />
			[<font color='#63bfaa'>Ö</font>] - Waffe schnell wechseln<br />
			<br />
			=== <font color='#B40486'>Zivilist</font> =================================================<br />
			[<font color='#63bfaa'>Windows (Links)</font>] - Sammeln von Rohstoffen und Früchten<br />
			    (Teilweise Spitzhacke/Perlennetz/Schaufel/Axt benötigt)<br />
			[<font color='#63bfaa'>SHIFT + G</font>] - Niederschlagen<br />
			<br />
			=== <font color='#2E2EFE'>Polizei</font> =================================================<br />
			[<font color='#63bfaa'>F3</font>] - Fahndungsliste anzeigen<br />
			[<font color='#63bfaa'>Ö</font>] - Barrikaden-Menue<br />
			[<font color='#63bfaa'>LEERTASTE</font>] - Barrikade Plazieren<br />
			[<font color='#63bfaa'>Entf</font>] - Barrikade Entfernen<br />
			[<font color='#63bfaa'>K</font>] - EMP-Menue<br />
			<br />
			=== <font color='#FF0040'>Rettungskräfte</font> =========================================<br />
			[<font color='#63bfaa'>Ö</font>] - Barrikaden-Menue<br />
			[<font color='#63bfaa'>LEERTASTE</font>] - Barrikade Plazieren<br />
			[<font color='#63bfaa'>Entf</font>] - Barrikade Entfernen<br />
			"
	]
];

player createDiaryRecord ["Illegales",
	[
		"Illegales",
			"
			<br />
			=== <font color='#FE642E'>Waffen</font> ==============================================<br />
			[<font color='#63bfaa'>Alle Waffen</font>] - vom Rebellenshop<br />
			[<font color='#63bfaa'>Alle Waffen</font>] - vom Elite-Shop<br />
			[<font color='#63bfaa'>Alle Langwaffen/Taser</font>] - von Polizisten<br />
			<br />
			=== <font color='#FE642E'>Fahrzeuge</font> ==============================================<br />
			<font color='#FACC2E'>Polizeifahrzeuge</font><br/>
			<font color='#FACC2E'>Strider</font><br/>
			<font color='#FACC2E'>Ifrit</font><br/>
			<font color='#FACC2E'>Qilin</font><br/>
			<font color='#FACC2E'>Prowler</font><br/>
			<br/>
			=== <font color='#FE642E'>Z-Items</font> ==============================================<br />
			<font color='#FACC2E'>Kokain</font><br/>
			<font color='#FACC2E'>Heroin</font><br/>
			<font color='#FACC2E'>Marihuana</font><br/>
			<font color='#FACC2E'>LSD</font><br/>
			<font color='#FACC2E'>Schlangengift</font><br/>
			<font color='#FACC2E'>K.O. Tropfen</font><br/>
			<font color='#FACC2E'>Magic Mushroom</font><br/>
			<font color='#FACC2E'>Moonshine</font><br/>
			<font color='#FACC2E'>Waffenfähiges Uran</font><br/>
			<font color='#FACC2E'>Magic Moon</font><br/>
			<font color='#FACC2E'>Hasch Brownies</font><br/>
			<font color='#FACC2E'>Frösche</font><br/>
			<font color='#FACC2E'>Schildkröten</font><br/>
			<font color='#FACC2E'>Schildkrötenfleisch</font><br/>
			<font color='#FACC2E'>Schlangen</font><br/>
			<font color='#FACC2E'>Dietriche</font><br/>
			<font color='#FACC2E'>Nagelbänder</font><br/>
			<font color='#FACC2E'>Kabelbinder</font><br/>
			<font color='#FACC2E'>Augenbinden</font><br/>
			<font color='#FACC2E'>Bolzenschneider</font><br/>
			<font color='#FACC2E'>Sprengstoff</font><br/>
			"
	]
];