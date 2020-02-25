namespace skillLevel {
	int fromExp(float experience) {
		int exp = round(experience);
		switch (exp) {
			case 379: return 15;
			case 422: return 16;
			case 466: return 17;
			case 514: return 18;
			case 564: return 19;
			case 616: return 20;
			case 671: return 21;
			case 729: return 22;
			case 789: return 23;
			case 851: return 24;
			case 916: return 25;
			case 984: return 26;
			case 1054: return 27;
			case 1127: return 28;
			case 1202: return 29;
			case 1280: return 30;
			case 1360: return 31;
			case 1443: return 32;
			case 1528: return 33;
			case 1616: return 34;
			case 1706: return 35;
			case 1798: return 36;
			case 1894: return 37;
			case 1991: return 38;
			case 2091: return 39;
			case 2194: return 40;
			case 2299: return 41;
			case 2406: return 42;
			case 2516: return 43;
			case 2629: return 44;
			case 2743: return 45;
			case 2861: return 46;
			case 2980: return 47;
			case 3103: return 48;
			case 3227: return 49;
			case 3354: return 50;
			case 3484: return 51;
			case 3616: return 52;
			case 3750: return 53;
			case 3887: return 54;
			case 4026: return 55;
			case 4168: return 56;
			case 4312: return 57;
			case 4458: return 58;
			case 4607: return 59;
			case 4759: return 60;
			case 4912: return 61;
			case 5069: return 62;
			case 5227: return 63;
			case 5388: return 64;
			case 5552: return 65;
			case 5717: return 66;
			case 5886: return 67;
			case 6056: return 68;
			case 6229: return 69;
			case 6405: return 70;
			case 6582: return 71;
			case 6763: return 72;
			case 6945: return 73;
			case 7130: return 74;
			case 7318: return 75;
			case 7507: return 76;
			case 7699: return 77;
			case 7894: return 78;
			case 8091: return 79;
			case 8290: return 80;
			case 8492: return 81;
			case 8696: return 82;
			case 8902: return 83;
			case 9111: return 84;
			case 9322: return 85;
			case 9536: return 86;
			case 9752: return 87;
			case 9970: return 88;
			case 10191: return 89;
			case 10414: return 90;
			case 10639: return 91;
			case 10867: return 92;
			case 11097: return 93;
			case 11330: return 94;
			case 11565: return 95;
			case 11802: return 96;
			case 12041: return 97;
			case 12283: return 98;
			case 12528: return 99;
			case 0: return 100;
		}
		// if all else fails just say it's 100
		return 100;
	}
}