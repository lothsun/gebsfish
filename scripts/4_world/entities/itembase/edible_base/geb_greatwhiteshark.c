/*

  CREATED BY PACKJC
  https://github.com/PackJC/gebsfish
  https://steamcommunity.com/sharedfiles/filedetails/?id=2757509117
  https://discord.com/invite/G8uSGZ8yyf
  Contributions welcome via github

*/

//Fish will be unable to be ran with, has to be held with two hands
class geb_GreatWhiteShark extends Edible_Base
{
	override bool CanBeCookedOnStick()
	{
		return false;
	}

	override bool CanBeCooked()
	{
		return false;
	}	
	
	override bool IsCorpse()
	{
		return true;
	}

	override bool CanDecay()
	{
		return true;
	}

	override bool CanSaveItemInHands(EntityAI item_in_hands)
	{
		return false;
	}

	override bool IsHeavyBehaviour() 
	{
	   return true;
	}
    
	override bool IsTwoHandedBehaviour() 
	{
	   return true;
	}
}