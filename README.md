Stasjon 3: Robot-arm
På denne stasjonen skal du jobbe med en robot-arm, som kan gripe tak i og flytte på forskjellige objekter.
Blir du ferdig med øvelsene før tiden, kan du enten velge å fortsette med de foreslåtte øvelsene eller å lage dit eget program. Det forventes ikke at du kan lage alle øvelserne selv, men det vil være mentorer tilstede som kan hjelpe med disse.
Du kan kopiere koden inn i ditt eget program hvis du ikke vil skrive det selv 😊.
Oppgaver:

1.	Start med å åpne Arduino programmet som ligger på denne linken.
Med dette programmet kan du bruke joysticken til å styre roboten manuelt. Bildet under viser de forskjellige funksjoner på joysticken. I tilegg kan du klikke på knappen til venstre for å deaktivere motorerne (dersom du vil unngå å høre på støyet).

 

Hvis du klikker på «Serial Monitor» i Arduino programmet kan du se motorernes vinkel-posisjon i grader, når roboten beveges (se bildetnunder). Disse posisjonene kan du bruke til å programmere roboten, så den automatisk beveger seg mellom de forskjellige posisjonene.

 
 

2.	Du kan få roboten til å bevege sig til en posisjon ved å skrive:

robotarm.MoveJ(pos1, pos2, pos3, tid);  

Her er verdiene med rød skrift de tre motor-posisjonene, og den siste verdi er tiden det tar å gå til posisjonen (du skal helst bruke 4). Disse verdiene kan du se når du klikker på «Serial Monitor».
Prøv å få roboten til å bevege seg mellom to punkter (HENT INSPIRASJON FRA LINJE 14-29 I KODEN).

3.	Prøv å åpne og lukke gripe-kloen ved å skrive:

robotarm.ChangeGripper(true);		(Åpne kloen)
robotarm.ChangeGripper(false);		(Lukk kloen)

4.	Du kan nå programmere roboten til å løfte og flytte objekter du har til rådighet opp i to glass f.eks. Husk at du kan bruke «delay()» for å få roboten til å vente.

5.	Hvis du har ekstra tid kan du bruke roboten som du vil. Du kan kanskje få den til å spille stein, saks papir mot deg, basert på et tilfeldigt tall mellom 1 og 3 (se linje 35-71 i koden for hjelp).
