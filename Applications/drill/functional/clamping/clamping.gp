UTF8b#      TNI Sos grafcet   �   P

      �l�
�G`����o                            	                                         clamping      ,   .   3   8   =   ?      A   C   E   G   J      -IF(((X10 OR X12) AND RE acknowledgePB )) THEN	clampingFault := 0;END_IF;IF(X11 AND rightFault) THEN	clampingFault := 1;END_IF;IF(X11 AND leftFault) THEN	clampingFault := 2;END_IF;IF(X13 AND rightFault) THEN	clampingFault := 3;END_IF;IF(X13 AND leftFault) THEN	clampingFault := 4;END_IF;   7leftLocking := X11 OR X12;rightLocking := X11 OR X12;          M   O                     L   �   �   �         
      w   classPropertyIdentifier      $efe67f35-7746-4c41-87ee-86d6ccbf6b60                    
      w   instanceNamingPatternProperty      <CLASS_PATTERN>                    
      w   classPropertyName      PROCESS                    
      w   plcLanguageByPLCList     l<?xml version="1.0" encoding="ISO-8859-1"?><!-- Generator: ControlBuild --><PLCExportInformations>	<PLCInfo PLC="PREMIUM UNITY" Language="graf">	</PLCInfo>	<PLCInfo PLC="PREMIUM PL7" Language="st">	</PLCInfo>	<PLCInfo PLC="API Siemens S7-300" Language="st">	</PLCInfo>	<PLCInfo PLC="API Siemens S7-400" Language="st">	</PLCInfo></PLCExportInformations>                    
      w   SY                             
      w   Herited      false                    
      w   commentPatternProperty      <CLASS_PATTERN>                    
   	   w   NU                             

   
   w   Herited      false                    
         G1                      %   	                      #   '   *    
             ^   ^   �   �         +         
   1IF (clampingFault = 0) THEN	releasingOK;END_IF;   JWait in rest position :clamping elements are openSignalling releasing OK     M  S   @    
            ���������   s     q  �              
            a  �  �  �                  rightUnlocked AND leftUnlocked    $Right and left elements are unlocked   �   :   �   :                                
               �   $   ~  �              
             ^  \   �  �         !            (          3Unlocking orders toright element and left element   �   H   �   B    
            !          ~  +              
             n  #   �  +                  4releasing AND NOT clamping  AND (clampingFault = 0)    Releasing request   �       �   3                                
                   !   ~  �              
             ^  �   �  �                  clampingOK;   KWait in rest position :clamping elements are closedSignalling clamping OK   �   U   �   ?    
            !          ~  �              
             n  y   �  �                  rightLocked AND leftLocked    "Right and left elements are locked   �   6   �   4                                
                   !   ~  H              
             ^     �  H                     "          1Locking orders toright element and left element   �   I  	   >    
            !          ~   �              
             n   �   �   �               
   4clamping AND NOT releasing  AND (clampingFault = 0)    Clamping request   �   7  �   5                                
                   !   ~   �              
            ��������`   s      ~  �              
             n  �   �  �                  clamping AND NOT releasing    Clamping request   �   8   �   4                                
                   !   ~  �              
              !      ~  H               
             �  y  �  �            !      releasing AND NOT clamping    Releasing request   �   4   �   1                                
   !         �����     �  �               
   "           �   !   ~  H          #    
   #         <  ~  \  �      "      $      (clampingFault > 0)   Clamping fault detected   �   6   �   ,                                
   $        p���1     L  �       #   %    
   %         ]    �  K      $   &      )          =Manual change of the situation(no command in automatic mode)  R   @   �   @    
   &         !         }  �       '   %    
   '         m  �  �  �      (      &      (clampingFault > 0)   Clamping fault detected   �   1   �   )                                
   (           �   &   ~  �          '    
   )                !  }  K       %   *    
   *         m  |  �  �      )      +      rightUnlocked AND leftUnlocked    "Right and left elements are locked   �   L   �   :                                
   +         ��������   r     }  �       *       
   ,   }a*�$*�MA����n       false               true   true               acknowledgePB   -            
   -   ;����        
   .   ~n᡿�I�3���
*       false                          /   1   Requests
   /   }Wr\��Fާ6/��
       false               true   true       .       	releasing   0   .        
   0   ;����        
   1   }�G�;�I��F?��@�       false               true   true       .       clamping   2   .        
   2   ;����        
   3   ~L�]vCw���6�:�e       false                          4   6   RightJackFB
   4   }p��=iPD����xl�w       false               true   true       3       rightUnlocked   5   3        
   5   ;����        
   6   }���`�B�D.q�       false               true   true       3       rightLocked   7   3        
   7   ;����        
   8   ~��IE3M����?G���       false                          9   ;   
LeftJackFB
   9   }��  �uG���}?'���       false               true   true       8       leftUnlocked   :   8        
   :   ;����        
   ;   }�&���nE-�'��~g       false               true   true       8       
leftLocked   <   8        
   <   ;����        
   =   }v,�G�A�V�� G       false               true   true               
rightFault   >            
   >   ;����        
   ?   }�����L��4}Y.E�'       false               true   true               	leftFault   @            
   @   ;����        
   A   }cq�t��M�-��]       false           clampingOK<SY><NU>   true   true               
clampingOK   B            
   B   ;����        
   C   }~5؆�I
���@�p�       false           releasingOK<SY><NU>   true   true               releasingOK   D            
   D   ;����        
   E   }�nY�O����~X㋲       false           clampingFault<SY><NU>   true   true               clampingFault   F            
   F   >����        
   G   ~%��/mF������o��       false                          H   RightJackOrders
   H   }Y����G�(~U<mb       false           rightLocking<SY><NU>   true   true       G       rightLocking   I   G        
   I   ;����        
   J   ~�����J���p?�S��       false                          K   LeftJackOrders
   K   }��r��.Mb�%r��P       false           leftLocking<SY><NU>   true   true       J       leftLocking   L   J        
   L   ;����        
   M   }���MlJC���؞C�-       false           clampingDuration<SY><NU>   true   true               clampingDuration   N            
   N   >����       n
   O   }ݦS	�HV��X���.       false           releasingDuration<SY><NU>   true   true               releasingDuration   P            
   P   >����       n
:^g�