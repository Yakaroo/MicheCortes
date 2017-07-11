/* Fragt ab ob ein Spieler die Keycard hat, um das Polizei HQ zu öffnen !  by Shriver */

while {true} do {

if ("ARP_Objects_card_black_m" in (itemsWithMagazines player)) then {

player setVariable ['copLevel',1]

} else {

player setVariable ['copLevel',0]

	};
  sleep 2;
};