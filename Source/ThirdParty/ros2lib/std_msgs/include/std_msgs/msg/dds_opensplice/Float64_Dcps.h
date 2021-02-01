#ifndef _H_C231436FC64E1A1DC988C756ACD751F4_Float64_DCPS_H_
#define _H_C231436FC64E1A1DC988C756ACD751F4_Float64_DCPS_H_

#include "sacpp_mapping.h"
#include "dds_dcps.h"
#include "Float64_.h"


namespace std_msgs
{
    namespace msg
    {
        namespace dds_
        {
            class Float64_TypeSupportInterface;

            typedef Float64_TypeSupportInterface * Float64_TypeSupportInterface_ptr;
            typedef DDS_DCPSInterface_var < Float64_TypeSupportInterface> Float64_TypeSupportInterface_var;
            typedef DDS_DCPSInterface_out < Float64_TypeSupportInterface> Float64_TypeSupportInterface_out;


            class Float64_DataWriter;

            typedef Float64_DataWriter * Float64_DataWriter_ptr;
            typedef DDS_DCPSInterface_var < Float64_DataWriter> Float64_DataWriter_var;
            typedef DDS_DCPSInterface_out < Float64_DataWriter> Float64_DataWriter_out;


            class Float64_DataReader;

            typedef Float64_DataReader * Float64_DataReader_ptr;
            typedef DDS_DCPSInterface_var < Float64_DataReader> Float64_DataReader_var;
            typedef DDS_DCPSInterface_out < Float64_DataReader> Float64_DataReader_out;


            class Float64_DataReaderView;

            typedef Float64_DataReaderView * Float64_DataReaderView_ptr;
            typedef DDS_DCPSInterface_var < Float64_DataReaderView> Float64_DataReaderView_var;
            typedef DDS_DCPSInterface_out < Float64_DataReaderView> Float64_DataReaderView_out;

            struct Float64_Seq_uniq_ {};
            typedef DDS_DCPSUFLSeq < Float64_, struct Float64_Seq_uniq_> Float64_Seq;
            typedef DDS_DCPSSequence_var < Float64_Seq> Float64_Seq_var;
            typedef DDS_DCPSSequence_out < Float64_Seq> Float64_Seq_out;

            class  Float64_TypeSupportInterface :
                virtual public DDS::TypeSupport
            { 
            public:
                typedef Float64_TypeSupportInterface_ptr _ptr_type;
                typedef Float64_TypeSupportInterface_var _var_type;

                static Float64_TypeSupportInterface_ptr _duplicate (Float64_TypeSupportInterface_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float64_TypeSupportInterface_ptr _narrow (DDS::Object_ptr obj);
                static Float64_TypeSupportInterface_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float64_TypeSupportInterface_ptr _nil () { return 0; }
                static const char * _local_id;
                Float64_TypeSupportInterface_ptr _this () { return this; }


            protected:
                Float64_TypeSupportInterface () {};
                ~Float64_TypeSupportInterface () {};
            private:
                Float64_TypeSupportInterface (const Float64_TypeSupportInterface &);
                Float64_TypeSupportInterface & operator = (const Float64_TypeSupportInterface &);
            };

            class  Float64_DataWriter :
                virtual public DDS::DataWriter
            { 
            public:
                typedef Float64_DataWriter_ptr _ptr_type;
                typedef Float64_DataWriter_var _var_type;

                static Float64_DataWriter_ptr _duplicate (Float64_DataWriter_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float64_DataWriter_ptr _narrow (DDS::Object_ptr obj);
                static Float64_DataWriter_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float64_DataWriter_ptr _nil () { return 0; }
                static const char * _local_id;
                Float64_DataWriter_ptr _this () { return this; }

                virtual DDS::LongLong register_instance (const Float64_& instance_data) = 0;
                virtual DDS::LongLong register_instance_w_timestamp (const Float64_& instance_data, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long unregister_instance (const Float64_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long unregister_instance_w_timestamp (const Float64_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long write (const Float64_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long write_w_timestamp (const Float64_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long dispose (const Float64_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long dispose_w_timestamp (const Float64_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long writedispose (const Float64_& instance_data, DDS::LongLong handle) = 0;
                virtual DDS::Long writedispose_w_timestamp (const Float64_& instance_data, DDS::LongLong handle, const DDS::Time_t& source_timestamp) = 0;
                virtual DDS::Long get_key_value (Float64_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Float64_& instance_data) = 0;

            protected:
                Float64_DataWriter () {};
                ~Float64_DataWriter () {};
            private:
                Float64_DataWriter (const Float64_DataWriter &);
                Float64_DataWriter & operator = (const Float64_DataWriter &);
            };

            class  Float64_DataReader :
                virtual public DDS::DataReader
            { 
            public:
                typedef Float64_DataReader_ptr _ptr_type;
                typedef Float64_DataReader_var _var_type;

                static Float64_DataReader_ptr _duplicate (Float64_DataReader_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float64_DataReader_ptr _narrow (DDS::Object_ptr obj);
                static Float64_DataReader_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float64_DataReader_ptr _nil () { return 0; }
                static const char * _local_id;
                Float64_DataReader_ptr _this () { return this; }

                virtual DDS::Long read (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Float64_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Float64_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Float64_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Float64_& instance) = 0;

            protected:
                Float64_DataReader () {};
                ~Float64_DataReader () {};
            private:
                Float64_DataReader (const Float64_DataReader &);
                Float64_DataReader & operator = (const Float64_DataReader &);
            };

            class  Float64_DataReaderView :
                virtual public DDS::DataReaderView
            { 
            public:
                typedef Float64_DataReaderView_ptr _ptr_type;
                typedef Float64_DataReaderView_var _var_type;

                static Float64_DataReaderView_ptr _duplicate (Float64_DataReaderView_ptr obj);
                DDS::Boolean _local_is_a (const char * id);

                static Float64_DataReaderView_ptr _narrow (DDS::Object_ptr obj);
                static Float64_DataReaderView_ptr _unchecked_narrow (DDS::Object_ptr obj);
                static Float64_DataReaderView_ptr _nil () { return 0; }
                static const char * _local_id;
                Float64_DataReaderView_ptr _this () { return this; }

                virtual DDS::Long read (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_w_condition (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_w_condition (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long read_next_sample (Float64_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long take_next_sample (Float64_& received_data, DDS::SampleInfo& sample_info) = 0;
                virtual DDS::Long read_instance (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_instance (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long take_next_instance (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ULong sample_states, DDS::ULong view_states, DDS::ULong instance_states) = 0;
                virtual DDS::Long read_next_instance_w_condition (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long take_next_instance_w_condition (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq, DDS::Long max_samples, DDS::LongLong a_handle, DDS::ReadCondition_ptr a_condition) = 0;
                virtual DDS::Long return_loan (Float64_Seq& received_data, DDS::SampleInfoSeq& info_seq) = 0;
                virtual DDS::Long get_key_value (Float64_& key_holder, DDS::LongLong handle) = 0;
                virtual DDS::LongLong lookup_instance (const Float64_& instance) = 0;

            protected:
                Float64_DataReaderView () {};
                ~Float64_DataReaderView () {};
            private:
                Float64_DataReaderView (const Float64_DataReaderView &);
                Float64_DataReaderView & operator = (const Float64_DataReaderView &);
            };
        }

    }

}

#endif
