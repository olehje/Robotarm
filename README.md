Stasjon 3: Robot-arm
På denne stasjon skal du jobbe med en robot-arm, som kan gripe tak i og flytte på forskjellige objekter.
Bliver du ferdig med øvelserne før tid, kan du enten velge å fortsette med de foreslåtte øvelser eller å lage dit eget program. Det forventes ikke at du kan lage alle øvelserne selv, men det vil være mentorer tilstede som kan hjelpe med disse.
Al kode er markeret med grøn tekst som du kan kopiere ind i dit program, dersom du ikke vil skrive det selv 😊
Opgaver:
1.	Start med å åpne Arduino programmet som ligger på dette link.
Med dette program kan du bruke joysticket til å styre roboten manuelt. Bildet herunder viser de forskjellige funksjoner på joysticket. I tilleg kan du klikke på knappen til venstre for å deaktivere motorerne (dersom du vil undgå å høre på støyen).

 

Hvis du klikker på «Serial Monitor» i Arduino programmet kan du se motorernes vinkel-positioner i grader, når roboten bevæges (se bildet herunder). Disse posisjoner kan du bruke til å programmere roboten, så den automatisk bevæger sig mellem forskjellige posisjoner.

 
 

2.	Du kan få roboten til å bevæge sig til en position ved å skrive:

robotarm.MoveJ(pos1, pos2, pos3, tid);  

Her er verdierne med rød skrift de tre motor-positioner, og den sidste verdi er tiden det må tage å gå til positionen (du skal helst bruke 4). Disse verdier kan du se når du klikker på «Serial Monitor».
Prøv å få roboten til å bevæge sig mellem to punkter (HENT INSPIRATION FRA LINJE 14-29 I KODEN).

3.	Prøv å åpne og lukke gripe-kloen ved å skrive:

robotarm.ChangeGripper(true);		(Åpen kloen)
robotarm.ChangeGripper(false);		(Luk kloen)

4.	Du kan nå programmere roboten til å løfte og flytte de objekter du har til rådighed op i de to glas. Husk at du kan bruke «delay()» for å få roboten til å vente.

5.	Hvis du har ekstra tid kan du bruke roboten som du vil. Du kan kanskje få den til å spille stein, saks papir mot deg, baseret på et tilfeldigt tal mellem 1 og 3 (se linje 35-71 i koden for hjelp).
