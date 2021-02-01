#ifndef _H_C3A5239C494E8F519EF2F6A2DEDEA5DC_UInt16_DCPS_H_
#define _H_C3A5239C494E8F519EF2F6A2DEDEA5DC_UInt16_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "UInt16_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class UInt16_TypeSupportInterface;

            typedef UInt16_TypeSupportInterface * UInt16_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < UInt16_TypeSupportInterface> UInt16_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < UInt16_TypeSupportInterface> UInt16_TypeSupportInterface_out;


            class UInt16_DataWriter;

            typedef UInt16_DataWriter * UInt16_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < UInt16_DataWriter> UInt16_DataWriter_var;
            typedef DDS_DCPSInterface_out < UInt16_DataWriter> UInt16_DataWriter_out;


            class UInt16_DataReader;

            typedef UInt16_DataReader * UInt16_DataReader_ptr;
            typedef DDS_DCPSInterface_var < UInt16_DataReader> UInt16_DataReader_var;
            typedef DDS_DCPSInterface_out < UInt16_DataReader> UInt16_DataReader_out;


            class UInt16_DataReaderView;

            typedef UInt16_DataReaderView * UInt16_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < UInt16_DataReaderView> UInt16_DataReaderView_var;
            typedef DDS_DCPSInterface_out < UInt16_DataReaderView> UInt16_DataReaderView_out;

            struct UInt16_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < UInt16_, struct UInt16_Seq_uniq_> UInt16_Seq;
            typedef DDS_DCPSSequence_var < UInt16_Seq> UInt16_Seq_var;
            typedef DDS_DCPSSequence_out < UInt16_Seq> UInt16_Seq_out;

            class  UInt16_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef UInt16_TypeSupportInterface_ptr _ptr_type;
                typedef UInt16_TypeSupportInterface_var _var_type;

                static UInt16_TypeSupportInterface_ptr _duplicate (UInt16_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt16_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static UInt16_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt16_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt16_TypeSupportInterface_ptr _this () { return this; }


            protected:
                UInt16_TypeSupportInterface () {};
                ~UInt16_TypeSupportInterface () {};
            private:
                UInt16_TypeSupportInterface (const UInt16_TypeSupportInterface &);
                UInt16_TypeSupportInterface & operator = (const UInt16_TypeSupportInterface &);
            };

            class  UInt16_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef UInt16_DataWriter_ptr _ptr_type;
                typedef UInt16_DataWriter_var _var_type;

                static UInt16_DataWriter_ptr _duplicate (UInt16_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt16_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static UInt16_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt16_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt16_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const UInt16_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const UInt16_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const UInt16_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const UInt16_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const UInt16_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const UInt16_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const UInt16_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const UInt16_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const UInt16_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const UInt16_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (UInt16_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt16_& instance_data) = 0;

            protected:
                UInt16_DataWriter () {};
                ~UInt16_DataWriter () {};
            private:
                UInt16_DataWriter (const UInt16_DataWriter &);
                UInt16_DataWriter & operator = (const UInt16_DataWriter &);
            };

            class  UInt16_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef UInt16_DataReader_ptr _ptr_type;
                typedef UInt16_DataReader_var _var_type;

                static UInt16_DataReader_ptr _duplicate (UInt16_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt16_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static UInt16_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt16_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt16_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UInt16_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UInt16_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UInt16_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt16_& instance) = 0;

            protected:
                UInt16_DataReader () {};
                ~UInt16_DataReader () {};
            private:
                UInt16_DataReader (const UInt16_DataReader &);
                UInt16_DataReader & operator = (const UInt16_DataReader &);
            };

            class  UInt16_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef UInt16_DataReaderView_ptr _ptr_type;
                typedef UInt16_DataReaderView_var _var_type;

                static UInt16_DataReaderView_ptr _duplicate (UInt16_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static UInt16_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static UInt16_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static UInt16_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                UInt16_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (UInt16_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (UInt16_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (UInt16_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (UInt16_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const UInt16_& instance) = 0;

            protected:
                UInt16_DataReaderView () {};
                ~UInt16_DataReaderView () {};
            private:
                UInt16_DataReaderView (const UInt16_DataReaderView &);
                UInt16_DataReaderView & operator = (const UInt16_DataReaderView &);
            };
        }

    }

}

#endif
