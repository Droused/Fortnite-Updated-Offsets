namespace SDK {

    int UWorlds = 0x1216B7B8;
    int Fname = 0x12328480;
    int Gameinstance = 0x1D8; // Class Engine.World -> struct UGameInstance* OwningGameInstance;

    int LocalPlayers = 0x38; // Class Engine.GameInstance -> struct TArray<struct ULocalPlayer*> LocalPlayers;
    int PlayerController = 0x30; // Class Engine.Player - > struct APlayerController* PlayerController;

    int LocalPawn = 0x338; // Class Engine.PlayerController - > struct APawn* AcknowledgedPawn;

    int PlayerState = 0x2b0; // Class Engine.Pawn - > struct APlayerState* PlayerState;
    int RootComponet = 0x198;  //Class Engine.Actor -> struct USceneComponent* RootComponent;
    int GameState = 0x160; // Class Engine.World -> struct AGameStateBase* GameState;
    int PersistentLevel = 0x30; // Class Engine.World -> struct ULevel* PersistentLevel;

    int Velocity = 0x168; // Class Engine.SceneComponent -> struct FVector ComponentVelocity;
    int GunName = 0x98;
    int IsDBNO = 0x982; //	FortniteGameClass.AFortPawn -> char bIsDBNO : 1;
    int IsDying = 0x758; //	FortniteGameClass.AFortPawn -> char bIsDying : 1;

    int Cameramanager = 0x348; // Class Engine.PlayerController -> struct APlayerCameraManager* PlayerCameraManager;
    int Mesh = 0x318; // Class Engine.Character struct USkeletalMeshComponent* Mesh;
    int Revivefromdbnotime = 0x4C30; // FortniteGameClass.AFortPlayerPawnAthena - > float ReviveFromDBNOTime;
    int TeamId = 0x1211;  // FortniteGame.FortPlayerStateAthena - > char TeamIndex;
    int pawn_private = 0x308; // Class Engine.PlayerState -> struct APawn* PawnPrivate;
    int bIsABot = 0x29a; // Class Engine.PlayerState -> char bIsABot : 1;
    int RelativeLocation = 0x120; // Class Engine.SceneComponent -> struct FVector RelativeLocation;
    int PlayerArray = 0x2a8; // Class Engine.GameStateBase -> struct TArray<struct APlayerState*> PlayerArray;
    int DefaultFOV = 0x2a4; //Engine_classes.APlayerCameraManager - > DefaultFOV;
    int AActor = 0xA0;
    int ActorCount = 0xA8;
    int ComponetToWorld = 0x1c0;
    int BoneArray = 0x5B0;
    int LAST_SUMBIT_TIME = 0x2E8;
    int LAST_SUMBIT_TIME_ON_SCREEN = 0x2F0;
    int Levels = 0x178;  //// Class Engine.World -> struct TArray<struct ULevel*> Levels;

    namespace FortWeapon {

        int CurrentWeapons = 0xA68;// Class FortniteGame.FortPawn -> struct AFortWeapon* CurrentWeapon;
        int WeaponData = 0x4F0; // Class FortniteGame.FortWeapon -> struct UFortWeaponItemDefinition* WeaponData;
        int ItemName = 0x40; // Class ItemizationCoreRuntime.ItemDefinitionBase -> struct FText ItemName;
        int Tier = 0x13c; // Class FortniteGame.FortItemDefinition - > enum class EFortRarity Rarity  ///
        int bIsReloadingWeapon = 0x388; // Class FortniteGame.AFortWeapon -> bool bIsReloadingWeapon;
        int AmmoCount = 0xE54; // Class FortniteGame.AActor -> int32_t AmmoCount;
    }
    namespace Character {
        int bIsCrouched = 0x45c; // Class Engine.Character -> char bIsCrouched;
    }
    namespace FortPawn {

        int bIsJumping = 0xa60; //Class FortniteGame.AFortPawn - > char bIsJumping : 1;
        int bIsSliding = 0x75b; //Class FortniteGame.AFortPawn - > char bIsSliding : 1;
        int TargetedFortPawn = 0x1888;  //Class FortniteGame.AFortPlayerController - > TargetedFortPawn;  ///
    }
