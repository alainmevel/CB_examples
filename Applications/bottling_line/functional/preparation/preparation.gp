UTF8b#      TNI Sos grafcet   �   =

      ���&�N*�v-�C$qi       
                  	   
                                                  preparation      "   $   &      -   <                                        
      w   UNIT                             
      w   	Mandatory      false                    
      w   classPropertyIdentifier      $efe67f35-7746-4c41-87ee-86d6ccbf6b60                    
      w   instanceNamingPatternProperty      <CLASS_PATTERN>                    
      w   classPropertyName      PROCESS                    
      w   CY                             
      w   Herited      false                    
   	   w   plcLanguageByPLCList     �<?xml version="1.0" encoding="ISO-8859-1"?><!-- Generator: ControlBuild --><PLCExportInformations>	<PLCInfo PLC="PREMIUM UNITY" Language="graf">	</PLCInfo>	<PLCInfo PLC="PREMIUM PL7" Language="st">	</PLCInfo>	<PLCInfo PLC="API Siemens S7-300" Language="st">	</PLCInfo>	<PLCInfo PLC="API Siemens S7-400" Language="st">	</PLCInfo>	<PLCInfo PLC="STEP7" Language="st">	</PLCInfo></PLCExportInformations>                    
   
   w   SY                             
      w   Herited      false                    
      w   SD                             
      w   	Mandatory      false                    
      w   commentPatternProperty      <CLASS_PATTERN>                    
      w   NU                             
      w   Herited      false                    
         G1                                       
             `   `   �   �            !   
       Initial step   �   @            
            �������D   8      �  �              
             p  �   �  �                  productionWaiting   Master waiting for production  /       �                                   
                      �  �              
             `  �   �  �                  preparationEnd;   End of preparation   �   @   �   @    
                      �  l              
             p  d   �  l                  
highLevel3   Tanks 3 filled   �       �                                    
            D          �                
             `  �   �                    ZpreparationAgit;preparationPump1;preparationPump2;preparationValve3;preparationValve4;   Filling of tanks 3   �   @   �   x    
                      �  �              
             p  �   �  �                  highLevel1 AND highLevel2    Tanks 1 and 2 filled   �       �                                    
            T          �  0              
             `   �   �  0                  eIF NOT highLevel1 THEN	preparationValve1;END_IF;IF NOT highLevel2 THEN	preparationValve2;END_IF;   Filling of tanks 1 and 2   �   @   �   �    
                      �   �               
              p   �   �   �      !         
   preparationRequest   Preparation request   �       �                                    
   !                   �   �               
   "   }In��G/�X[E�7�d       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               preparationRequest   #            
   #   ;����        
   $   }�`���D*��Ǩ�)T       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               productionWaiting   %            
   %   ;����        
   &   ~� X�RH{���^/��3       false                          '   )   +   Levels
   '   }<�c�KS�J��"�       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       &       
highLevel1   (   &        
   (   ;����        
   )   }�v�D9�MV��gP�]�       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       &       
highLevel2   *   &        
   *   ;����        
   +   }&�����OܑtQA��$       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       &       
highLevel3   ,   &        
   ,   ;����        
   -   ~ӯR�ҘF1��V6�^�       false                          .   0   2   4   6   8   :   FunctionsRequests
   .   }[�ƻ�@��@b_�qx       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       -       preparationValve1   /   -        
   /   ;����        
   0   }�Ӓ�W�Cq��5���       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       -       preparationValve2   1   -        
   1   ;����        
   2   }�ָ.rLB�P���b�       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       -       preparationValve3   3   -        
   3   ;����        
   4   }����AF��A��IW       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       -       preparationValve4   5   -        
   5   ;����        
   6   }>�;׷�C��bc�1a�       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       -       preparationPump1   7   -        
   7   ;����        
   8   }F��bfM���m�U�       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       -       preparationPump2   9   -        
   9   ;����        
   :   }mj�.�Mዦ!�#�*       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true       -       preparationAgit   ;   -        
   ;   ;����        
   <   }	Ј
��Bi��}%�NH�       false       <CLASS_PATTERN>   <CLASS_PATTERN>   true   true               preparationEnd   =            
   =   ;����        
x 7�