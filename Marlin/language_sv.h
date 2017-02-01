/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * Swedish
 *
 * LCD Menu Messages
 * See also https://github.com/MarlinFirmware/Marlin/wiki/LCD-Language
 *
 */
#ifndef LANGUAGE_SV_H
#define LANGUAGE_SV_H

#define MAPPER_C2C3
#define DISPLAY_CHARSET_ISO10646_1

  #define WELCOME_MSG                         MACHINE_NAME " redo."
  #define MSG_SD_INSERTED                     "Kort införd"
  #define MSG_SD_REMOVED                      "Kort avlägsnat"
  #define MSG_LCD_ENDSTOPS                    "Ändstopp" // Max length 8 characters
  #define MSG_MAIN                            "Meny"
  #define MSG_AUTOSTART                       "Autostart"
  #define MSG_DISABLE_STEPPERS                "Inaktivera stegmotorer"
  #define MSG_AUTO_HOME                       "Auto hem"
  #define MSG_AUTO_HOME_X                     "Hem X"
  #define MSG_AUTO_HOME_Y                     "Hem Y"
  #define MSG_AUTO_HOME_Z                     "Hem Z"
  #define MSG_LEVEL_BED_HOMING                "Hemvändande XYZ"
  #define MSG_LEVEL_BED_WAITING               "Tryck för att starta"
  #define MSG_LEVEL_BED_NEXT_POINT            "Nästa punkt"
  #define MSG_LEVEL_BED_DONE                  "Utjämning klar!"
  #define MSG_LEVEL_BED_CANCEL                "Avbryt"
  #define MSG_SET_HOME_OFFSETS                "Justera home förskjutning"
  #define MSG_HOME_OFFSETS_APPLIED            "Förskjutningar tillämpade"
  #define MSG_SET_ORIGIN                      "Sätt origin" 
  #define MSG_PREHEAT_1                       "Förvärm PLA"
  #define MSG_PREHEAT_1_N                     MSG_PREHEAT_1 " "
  #define MSG_PREHEAT_1_ALL                   MSG_PREHEAT_1 " Alla"
  #define MSG_PREHEAT_1_BEDONLY               MSG_PREHEAT_1 " Bädd"

#ifndef MSG_PREHEAT_1_SETTINGS
  #define MSG_PREHEAT_1_SETTINGS              MSG_PREHEAT_1 " conf"
#endif

  #define MSG_PREHEAT_2                       "Förvärm ABS"
  #define MSG_PREHEAT_2_N                     MSG_PREHEAT_2 " "
  #define MSG_PREHEAT_2_ALL                   MSG_PREHEAT_2 " Alla"
  #define MSG_PREHEAT_2_BEDONLY               MSG_PREHEAT_2 " Bädd"

#ifndef MSG_PREHEAT_2_SETTINGS
  #define MSG_PREHEAT_2_SETTINGS              MSG_PREHEAT_2 " conf"
#endif

  #define MSG_COOLDOWN                        "Nedkylning"
  #define MSG_SWITCH_PS_ON                    "Slå på ström"
  #define MSG_SWITCH_PS_OFF                   "Slå av ström"
  #define MSG_EXTRUDE                         "Pressa ut"
  #define MSG_RETRACT                         "Dra tillbaka"
  #define MSG_MOVE_AXIS                       "Flytta axel"
  #define MSG_LEVEL_BED                       "Jämna till bädd"
  #define MSG_MOVE_X                          "Flytta X"
  #define MSG_MOVE_Y                          "Flytta Y"
  #define MSG_MOVE_Z                          "Flytta Z"
  #define MSG_MOVE_E                          "Extruder"
  #define MSG_MOVE_01MM                       "Flytta 0.1mm"
  #define MSG_MOVE_1MM                        "Flytta 1mm"
  #define MSG_MOVE_10MM                       "Flytta 10mm"
  #define MSG_SPEED                           "Hastighet"
  #define MSG_BED_Z                           "Bädd Z"
  #define MSG_NOZZLE                          "Munstycke"
  #define MSG_BED                             "Bädd"
  #define MSG_FAN_SPEED                       "Hastighet fläkt"
  #define MSG_FLOW                            "Flöde"
  #define MSG_CONTROL                         "Kontrollera"
  #define MSG_MIN                             " " LCD_STR_THERMOMETER " Min"
  #define MSG_MAX                             " " LCD_STR_THERMOMETER " Max"
  #define MSG_FACTOR                          " " LCD_STR_THERMOMETER " Faktor"
  #define MSG_AUTOTEMP                        "Autotemp"
  #define MSG_ON                              "På "
  #define MSG_OFF                             "Av"
  #define MSG_PID_P                           "PID-P"
  #define MSG_PID_I                           "PID-I"
  #define MSG_PID_D                           "PID-D"
  #define MSG_PID_C                           "PID-C"
  #define MSG_SELECT                          "Välj"
  #define MSG_ACC                             "Accel"
  #define MSG_VX_JERK                         "Vx-jerk"
  #define MSG_VY_JERK                         "Vy-jerk"
  #define MSG_VZ_JERK                         "Vz-jerk"
  #define MSG_VE_JERK                         "Ve-jerk"
  #define MSG_VMAX                            "Vmax "
  #define MSG_VMIN                            "Vmin"
  #define MSG_VTRAV_MIN                       "VTrav min"
  #define MSG_AMAX                            "Amax "
  #define MSG_A_RETRACT                       "A-dra tillbaka"
  #define MSG_A_TRAVEL                        "A-travel"
  #define MSG_XSTEPS                          "Xsteg/mm"
  #define MSG_YSTEPS                          "Ysteg/mm"
  #define MSG_ZSTEPS                          "Zsteg/mm"
  #define MSG_ESTEPS                          "Esteg/mm"
  #define MSG_TEMPERATURE                     "Temperatur"
  #define MSG_MOTION                          "Rörelse"
  #define MSG_VOLUMETRIC                      "Filament"
  #define MSG_VOLUMETRIC_ENABLED              "E i mm3"
  #define MSG_FILAMENT_DIAM                   "Fil. Dia."
  #define MSG_CONTRAST                        "LCD kontrast"
  #define MSG_STORE_EPROM                     "Lagra memory"
  #define MSG_LOAD_EPROM                      "Ladda minne"
  #define MSG_RESTORE_FAILSAFE                "Återställ felsäkring"
  #define MSG_REFRESH                         "Uppdatera"
  #define MSG_WATCH                           "Info skärm"
  #define MSG_PREPARE                         "Förbered"
  #define MSG_TUNE                            "Justera"
  #define MSG_PAUSE_PRINT                     "Pausa utskrift"
  #define MSG_RESUME_PRINT                    "Återuppta utskrift"
  #define MSG_STOP_PRINT                      "Avbryt utskrift"
  #define MSG_CARD_MENU                       "Skriv ut från SD"
  #define MSG_NO_CARD                         "Inget SD kort"
  #define MSG_DWELL                           "Vila..."
  #define MSG_USERWAIT                        "Vänta på användare..."
  #define MSG_RESUMING                        "Återupptar utskrift"
  #define MSG_PRINT_ABORTED                   "Utskrift avbruten"
  #define MSG_NO_MOVE                         "Ingen rörelse."
  #define MSG_KILLED                          "AVBRÖTS. "
  #define MSG_STOPPED                         "STANNADE. "
  #define MSG_CONTROL_RETRACT                 "Dra tillbaka mm"
  #define MSG_CONTROL_RETRACT_SWAP            "Swap Re.mm"
  #define MSG_CONTROL_RETRACTF                "Dra tillbaka  V"
  #define MSG_CONTROL_RETRACT_ZLIFT           "Lyft mm"
  #define MSG_CONTROL_RETRACT_RECOVER         "UnRet +mm"
  #define MSG_CONTROL_RETRACT_RECOVER_SWAP    "S UnRet+mm"
  #define MSG_CONTROL_RETRACT_RECOVERF        "UnRet  V"
  #define MSG_AUTORETRACT                     "AutoRetr."
  #define MSG_FILAMENTCHANGE                  "Byt filament"
  #define MSG_INIT_SDCARD                     "Init. SD kort"
  #define MSG_CNG_SDCARD                      "Byt SD kort"
  #define MSG_ZPROBE_OUT                      "Z probe utanför. bädd"
  #define MSG_BLTOUCH_SELFTEST                "BLTouch självtest"
  #define MSG_BLTOUCH_RESET                   "Återställ BLTouch"
  #define MSG_HOME                            "Hem"  // Used as MSG_HOME " " MSG_X MSG_Y MSG_Z " " MSG_FIRST
  #define MSG_FIRST                           "först"
  #define MSG_ZPROBE_ZOFFSET                  "Z Kompensation"
  #define MSG_BABYSTEP_X                      "Babysteg X"
  #define MSG_BABYSTEP_Y                      "Babysteg Y"
  #define MSG_BABYSTEP_Z                      "Babysteg Z"
  #define MSG_ENDSTOP_ABORT                   "Ändstopp avbryt"
  #define MSG_HEATING_FAILED_LCD              "Uppvärmning misslyckades"
  #define MSG_ERR_REDUNDANT_TEMP              "Fel: REDUNDANT TEMP"
  #define MSG_THERMAL_RUNAWAY                 "TERMISK RUSNING"
  #define MSG_ERR_MAXTEMP                     "Fel: MAXTEMP"
  #define MSG_ERR_MINTEMP                     "Fel: MINTEMP"
  #define MSG_ERR_MAXTEMP_BED                 "Fel: MAXTEMP BÄDD"
  #define MSG_ERR_MINTEMP_BED                 "Fel: MINTEMP BÄDD"
  #define MSG_ERR_Z_HOMING                    "G28 Z Förbjuden"
  #define MSG_HALTED                          "SKRIVARE STOPPAD"
  #define MSG_PLEASE_RESET                    "Vänligen återställ"
  #define MSG_SHORT_DAY                       "d" // One character only
  #define MSG_SHORT_HOUR                      "t" // One character only
  #define MSG_SHORT_MINUTE                    "m" // One character only
  #define MSG_HEATING                         "Värmer..."
  #define MSG_HEATING_COMPLETE                "Uppvärmning klar."
  #define MSG_BED_HEATING                     "Bädd värmer upp."
  #define MSG_BED_DONE                        "Bädd klar."
  #define MSG_DELTA_CALIBRATE                 "Delta kalibrering"
  #define MSG_DELTA_CALIBRATE_X               "Kalibrera X"
  #define MSG_DELTA_CALIBRATE_Y               "Kalibrera Y"
  #define MSG_DELTA_CALIBRATE_Z               "Kalibrera Z"
  #define MSG_DELTA_CALIBRATE_CENTER          "Kalibrera centrum"
  #define MSG_INFO_MENU                       "Om skrivaren"
  #define MSG_INFO_PRINTER_MENU               "Skrivar Info"
  #define MSG_INFO_STATS_MENU                 "Printer Stats"

#ifndef MSG_INFO_BOARD_MENU
  #define MSG_INFO_BOARD_MENU                 "Board Info"
#endif

  #define MSG_INFO_THERMISTOR_MENU            "Termistorer"
  #define MSG_INFO_EXTRUDERS                  "Extruders"
  #define MSG_INFO_BAUDRATE                   "Baud"
  #define MSG_INFO_PROTOCOL                   "Protokoll"
  #define MSG_LIGHTS_ON                       "Chassi ljus På"
  #define MSG_LIGHTS_OFF                      "Chassi Ljus Av"


#if LCD_WIDTH >= 20
    #define MSG_INFO_PRINT_COUNT              "Antal utskrifter"
    #define MSG_INFO_COMPLETED_PRINTS         "Avslutad"
    #define MSG_INFO_PRINT_TIME               "Totalt utskriftstid"
    #define MSG_INFO_PRINT_LONGEST            "Längsta jobbtid"
    #define MSG_INFO_PRINT_FILAMENT           "Totalt extruderat"	
	
#else

    #define MSG_INFO_PRINT_COUNT              "Utskrifter"
    #define MSG_INFO_COMPLETED_PRINTS         "Avslutade"
    #define MSG_INFO_PRINT_TIME               "Total"
    #define MSG_INFO_PRINT_LONGEST            "Längsta"
    #define MSG_INFO_PRINT_FILAMENT           "Extruderat"

#endif


  #define MSG_INFO_MIN_TEMP                   "Min Temp"
  #define MSG_INFO_MAX_TEMP                   "Max Temp"
  #define MSG_INFO_PSU                        "Strömkälla"


#ifndef MSG_DRIVE_STRENGTH
  #define MSG_DRIVE_STRENGTH                  "Drive Strength"
#endif
#ifndef MSG_DAC_PERCENT
  #define MSG_DAC_PERCENT                     "Driver %"
#endif

  #define MSG_DAC_EEPROM_WRITE                "DAC EEPROM Skriv"
  #define MSG_FILAMENT_CHANGE_HEADER          "BYT FILAMENT"
  #define MSG_FILAMENT_CHANGE_OPTION_HEADER   "ÄNDRA ALTERNATIV:"
  #define MSG_FILAMENT_CHANGE_OPTION_EXTRUDE  "Extrudera mer"
  #define MSG_FILAMENT_CHANGE_OPTION_RESUME   "Återuppta utskrift"


//
// Filament Change screens show up to 3 lines on a 4-line display
//                        ...or up to 2 lines on a 3-line display
//
#if LCD_HEIGHT >= 4
    #define MSG_FILAMENT_CHANGE_INIT_1          "Vänta på att"
    #define MSG_FILAMENT_CHANGE_INIT_2          "filament byte"
    #define MSG_FILAMENT_CHANGE_INIT_3          "ska starta"

    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Vänta medan"
    #define MSG_FILAMENT_CHANGE_UNLOAD_2        "filament urlastas"

    #define MSG_FILAMENT_CHANGE_INSERT_1        "Sätt i filament"
    #define MSG_FILAMENT_CHANGE_INSERT_2        "och tryck på knappen"
    #define MSG_FILAMENT_CHANGE_INSERT_3        "för att fortsätta..."

    #define MSG_FILAMENT_CHANGE_LOAD_1          "Vänta medan"
    #define MSG_FILAMENT_CHANGE_LOAD_2          "filament laddar"

    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Vänta på"
    #define MSG_FILAMENT_CHANGE_EXTRUDE_2       "filament extrudering"

    #define MSG_FILAMENT_CHANGE_RESUME_1        "Vänta på att utskriften"
    #define MSG_FILAMENT_CHANGE_RESUME_2        "ska återupptas"

#else // LCD_HEIGHT < 4
    #define MSG_FILAMENT_CHANGE_INIT_1          "Vänligen vänta..."

    #define MSG_FILAMENT_CHANGE_UNLOAD_1        "Matar ut..."
	
    #define MSG_FILAMENT_CHANGE_INSERT_1        "Sätt i och Klicka"

    #define MSG_FILAMENT_CHANGE_LOAD_1          "Laddar..."

    #define MSG_FILAMENT_CHANGE_EXTRUDE_1       "Extruderar..."

    #define MSG_FILAMENT_CHANGE_RESUME_1        "Återupptar..."

#endif // LCD_HEIGHT < 4


#endif // LANGUAGE_SV_H
