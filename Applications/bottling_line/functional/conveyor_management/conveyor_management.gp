UTF8b#      TNI Sos grafcet   �   <

      F�Ox��I�+L�                         	   
                                            conveyor_management      %   '      .   5      7                  9   ;                    
      w   NU                             
      w   Herited      false                    
      w   classPropertyIdentifier      $efe67f35-7746-4c41-87ee-86d6ccbf6b60                    
      w   classPropertyName      PROCESS                    
      w   CY                             
      w   Herited      false                    
      w   commentPatternProperty      <CLASS_PATTERN>                    
   	   w   plcLanguageByPLCList     �<?xml version="1.0" encoding="ISO-8859-1"?><!-- Generator: ControlBuild --><PLCExportInformations>	<PLCInfo PLC="PREMIUM UNITY" Language="graf">	</PLCInfo>	<PLCInfo PLC="PREMIUM PL7" Language="st">	</PLCInfo>	<PLCInfo PLC="API Siemens S7-300" Language="st">	</PLCInfo>	<PLCInfo PLC="API Siemens S7-400" Language="st">	</PLCInfo>	<PLCInfo PLC="STEP7" Language="st">	</PLCInfo></PLCExportInformations>                    
   
   w   SY                             
      w   Herited      false                    
      w   instanceNamingPatternProperty      <CLASS_PATTERN>                    
         G1                                            #    
             ^   ^   �   �            !   $   
   encoder := 0;   Initial step   �   @   �   @    
            ��������   S      ~                
             n  w   �                    (encoder >= value)   Run one step forward   �       �                                    
                   !   ~  F              
             ^     �  F                  Kconvoy;IF RE pulseGenerator  THEN encoder := encoder + increment;END_IF;   #Request to run forward the conveyor   �   @  �   @    
            !          ~  �              
             n  �   �  �                  	T/X13/2 s   !Tests on the jack's inlet sensors  A   5  9                                    
                   !   ~  �              
             ^  \   �  �                  !load := FALSE;evacuate := FALSE;   Jacks in   �   @   �   @    
            !          ~  +              
             n  #   �  +                  	T/X12/2 s   "Tests on the jack's outlet sensors  ,   *  &                                    
                   !   ~  �              
             ^  �   �  �         "            load := TRUE;evacuate := TRUE;   	Jacks out   �   @   �   @    
            !          ~  �              
             n  y   �  �                  bottleFilled   Bottle filled   �       �                                    
                   !   ~  H              
             ^     �  H                  valve5;   7Filling of the bottleAND initialisation of the encoder     @   �   @    
            !          ~   �               
              n   �   �   �      !         
   $productionRequest AND bottlePresent    (Presence of a bottleAND production mode   �   1  $   7                                
   !                !   ~   �               
   "         ����g   !     �       #       
   #            �  '   �      $      "      (productionRequest AND NOT bottlePresent    No bottle AND production mode   �   C  ^   I                                
   $           �      ~   �          #    
   %   }���$��F���:Kv=�0       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               productionRequest   &            
   &   ;����        
   '   ~����m�M��ݰX��s�       false                          (   *   ,   OP_FeedBacks
   (   }s�ڤ�O�����a       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       '       pulseGenerator   )   '        
   )   ;����        
   *   }8M�x�vNj��̗�UA.       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       '       bottleFilled   +   '        
   +   ;����        
   ,   }Vo���;K:�Dv�,��n       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       '       bottlePresent   -   '        
   -   ;����        
   .   ~�)��K�Wd�a���       false                          /   1   3   ConveyorFunctionRequests
   /   }G�UABE�6��%p       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       .       load   0   .        
   0   ;����        
   1   }>M<%��Jy��pN��K       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       .       evacuate   2   .        
   2   ;����        
   3   }X�i��B��0��t��       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       .       convoy   4   .        
   4   ;����        
   5   }}D�I|J!�� .h       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               valve5   6            
   6   ;����        
   7   }� ��(SBU�ܒW�Q       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               encoder   8            
   8   =����        
   9   }��0�j�DӴ�th��X�       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               value   :            
   :   =����       

   ;   }�eo��I��JDT�       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               	increment   <            
   <   =����       
�i�